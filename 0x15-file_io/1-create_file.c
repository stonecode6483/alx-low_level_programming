#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to be createded
 * @text_content:content in the file
 * Return; 1 if success,-1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int rwr;
	int nletters;
	int file_l;

	if (filename)
		return (-1);
	file_l = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_l == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_l, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(file_l);
	return (1);
}


#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the content in the file
 * Return: 1 on success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_l;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
file_l = open(filename, O_WRONLY | O_APPEND);
if (file_l == -1)
	return (-1);
if (text_content)
{
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_l, text_content, nletters);
	if (rwr == -1)
		return (-1);
}
close(file_l);
return (1);
}

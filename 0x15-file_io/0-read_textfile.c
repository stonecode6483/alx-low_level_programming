#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to  read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_l;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_l = open(filename, O_RDONLY);
	if (file_l == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_l);
		return (0);
	}
	lenr = read(file_l, buffer, letters);
	close(file_l);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}

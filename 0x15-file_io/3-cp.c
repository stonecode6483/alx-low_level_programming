#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
void check_IO_stat(int stat, int fd, char *filename, char mode)
/**
 * main -function that copy file from one file to another
 * argc: arguments to count
 * argv:  the arguments  passed
 * Return: 1 if success,else exit
 */
int main(int argc, char *argv[])
{
	int dest, src, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'w');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - a function that check if a file can be open or close
 * @stat: file descriptor of file to be opened
 * @mode: opening or closing
 * @fd: file descriptor
 *
 * Return:void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %dn", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
		dprintf(STDERR_FILENO, "Error: can't read from the file %s\n", filename);
	exit(98);
}
else if (mode == 'w' && stat == -1)
{
	dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
	exit(99);
}
}

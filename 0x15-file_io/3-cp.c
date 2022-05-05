#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buf(char *file);
void close_file(int fd);
/**
 * create_buf - create a buffer
 * @filename: the name of file
 * Return: the result
 */
char *create_buf(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes file
 * @fd: the file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the content of a file
 * @argc: the number of arguments
 * @argv: An array of pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close_file(f);
	close_file(t);
	return (0);
}

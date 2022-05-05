#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: name of file
 * @letters: the number of letter
 * Return: the result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t r, o, w;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}

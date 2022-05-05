#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - append text of  a file
 * @filename: name of file
 * @text_content: a text
 * Return: the result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int t = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (t = 0; text_content[t]; t++)
		{
			;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, t);

	if (o == -1 ||  w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}

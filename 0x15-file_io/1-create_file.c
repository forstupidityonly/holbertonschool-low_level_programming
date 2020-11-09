#include "holberton.h"
/**
  * create_file - make file
  * @filename: filename
  * @text_content: what u think
  * Return: file
  */
int create_file(const char *filename, char *text_content)
{
	int i, j, count = 0;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}
	j = write(i, text_content, count);
	if (j == -1)
	{
		close(i);
		return (-1);
	}
	return (1);
}

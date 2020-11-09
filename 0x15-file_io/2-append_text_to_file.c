#include "holberton.h"
/**
  * append_text_to_file - append
  * @filename: filename
  * @text_content: text
  * Return: file
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, count = 0;

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (!text_content)
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

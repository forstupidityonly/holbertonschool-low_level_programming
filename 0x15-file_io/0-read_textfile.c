#include "holberton.h"
/**
  * read_textfile - reads a text file and print to POSTIX stdout
  * @filename: the name of file
  * @letters: num of letters to read @ print
  * Return: num of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *buffer;
	ssize_t _read, _write;

	if (!filename)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(i);
		return (0);
	}
	_read = read(i, buffer, letters);
	if (_read == -1)
		return (0);
	close(i);
	_write = write(STDOUT_FILENO, buffer, _read);
	return (_write);
}

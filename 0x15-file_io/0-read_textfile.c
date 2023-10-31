#include "main.h"
/**
* read_textfile - reads a text file and prints the letters
* @filename: filename.
* @letters: numbers of letters printed.
*
* Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *buff;

	a = b = c = 0;
	if (!filename || !letters)
		return (0);

	a = open(filename, O_RDONLY);
	if (a < 0)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);
	c = read(a, buff, letters);
	if (c < 0)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	b = write(STDOUT_FILENO, buff, c);
	if (b <= 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(a);
	return (c);

}

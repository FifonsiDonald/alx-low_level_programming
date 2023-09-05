#include "main.h"

/**
 * main - Copy a file.
 * @argc: The number of arguments
 * @argv: The arguments.
 * Description: Copy a file.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	int bytes_read, close_source, close_dest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_fd = open(*(argv + 1), O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	dest_fd = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		if (dest_fd == -1 || (write(dest_fd, buffer, bytes_read) != bytes_read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	close_source = close(source_fd);
	if (close_source < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source_fd), exit(100);
	close_dest = close(dest_fd);
	if (close_dest < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest_fd), exit(100);
	return (0);
}

#include "main.h"

/**
 * read_textfile - a function to read text in a file.
 * @filename: is the file to read from
 * @letters: number of letters
 * Return: 0 if it fails or actual number if pass
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	char *buff;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fildes);
		return (0);
	}
	bytes_read = read(fildes, buff, letters);
	if (bytes_read == -1)
	{
		close(fildes);
		free(buff);
		return (0);
	}
	buff[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fildes);
		free(buff);
		return (0);
	}
	close(fildes);
	free(buff);
	return (bytes_written);
}

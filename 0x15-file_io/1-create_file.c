#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: file  contents
 * Return: 1 on success OR -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fildes;

	if (filename == NULL)
		return (-1);

	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fildes == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fildes, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fildes);
			return (-1);
		}
	}
	close(fildes);
	return (1);
}


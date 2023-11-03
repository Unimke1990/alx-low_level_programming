#include "main.h"
/**
 * append_text_to_file -function that append text to file
 *@filename: name of the file
 *@text_content: content to be appended
 *Return: 1 on success and -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int write_return;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		write_return = write(fd, text_content, letters);

		if (write_return == -1)
			return (-1);
	}
	close(fd);

	return (1);
}


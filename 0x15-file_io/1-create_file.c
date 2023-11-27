#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the bath of the file.
 * @text_content: the content of the file.
 * Return:1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i, con1;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		con1 = write(fd, text_content, i);
		if (con1 < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}

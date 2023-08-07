#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Description: function
 * @s: string
 * Return: l
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}

/**
 * append_text_to_file -appends text at the end of a file
 * to the POSIX standard output
 * @filename: filename reading
 * @text_content: text to write
 *
 * Return: 1 or 0 (success or fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes, l = _strlen(text_content);
	int fdn;

	if (!filename)
		return (-1);
	fdn = open(filename, O_WRONLY | O_APPEND);
	if (fdn == 1)
		return (-1);
	if (l)
		bytes = write(fdn, text_content, l);
	close(fdn);
	return (bytes == l ? 1 : -1);
}

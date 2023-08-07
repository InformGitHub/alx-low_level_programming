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

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 * create_file -  creates file
 * to the POSIX standard output
 * @filename: filename reading
 * @text_content: text to write
 *
 * Return: 1 or 0 (success or fail)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes, l = strlen(text_content);
	int fdn;

	if (!filename)
		return (-1);
	fdn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdn == 1)
		return (-1);
	if (l)
		bytes = write(fdn, text_content, l);
	close(fdn);
	return (bytes == l ? 1 : -1);
}

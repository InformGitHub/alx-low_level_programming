#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: filename reading
 * @letters: bytes's number
 *
 * Return: bytes's number printing
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdn;
	ssize_t bytes;
	char Buf[READ_BUFSIZ * 8];

	if (!letters || !filename)
		return (0);
	fdn = open(filename, O_RDONLY);
	if (fdn == -1)
		return (0);
	bytes = read(fdn, Buf, letters);
	bytes = write(STDOUT_FILENO, Buf, bytes);
	close(fdn);
	return (bytes);
}

#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: cant read from file %s\n"
#define ERR_NOWRITE "Error: cant write fd to %s\n"
#define ERR_NOCLOSE "Error: cant close fd to %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 1 or 0 (success or fail)
 */
int main(int ac, char **av)
{
	int to_fdn = 0, fr_fdn = 0;
	ssize_t by = 0;
	char Buf[READ_BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fr_fdn = open(av[1], O_RDONLY);
	if (fr_fdn == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fdn = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fdn == 1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (by == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	while ((by = read(fr_fdn, Buf, READ_BUFSIZ)) > 0)
		if (write(to_fdn, Buf, by) != by)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	fr_fdn = close(fr_fdn);
	to_fdn = close(to_fdn);
	if (fr_fdn)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fdn), exit(100);
	if (to_fdn)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fdn), exit(100);
	return (EXIT_SUCCESS);
}

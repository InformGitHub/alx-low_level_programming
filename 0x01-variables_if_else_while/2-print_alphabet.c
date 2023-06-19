#include <stdio.h>

int main(void)
{
	char a[10] = "abcdefghij";
	int i;

	for (i = 0; i < 10; i++)
		putchar(a[i]);

	putchar('\n');

	return (0);
}

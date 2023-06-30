#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * Description: function
 * @r: ivalue
 * Return: r
 */
char *rot13(char *r)
{
	int k, h;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz";
	char datrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; r[k] != '\0'; k++)
	{
		for (h = 0; h < 52; h++)
		{
			if (r[k] == data[h])
			{
				r[k] = datrot[h];
				break;
			}
		}
	}
	return (r);
}



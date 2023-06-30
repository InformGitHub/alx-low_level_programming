#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * Description: function
 * @s: ivalue
 * Return: r
 */
char *rot13(char *s)
{
	int k, h;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz";
	char datrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (h = 0; h < 52; h++)
		{
			if (s[k] == data[h])
			{
				s[k] = datrot[h];
				break;
			}
		}
	}
	return (s);
}

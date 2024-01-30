#include "main.h"
/**
 * rot13 - Encodes strings using the rot13 encription code
 *
 * @str: string to be encoded
 *
 * Return: char
 */
int print_rot13(va_list val)
{
	int index;
	char *str = va_arg(val, char*);
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int num;

	while (str[index] != '\0')
	{
		for (num = 0; num <= 52; num++)
		{
			if (str[index] == alph[num])
			{
				str[index] = rot13[num];
				break;
			}
		}
		index++;
	}
	return (index);
}

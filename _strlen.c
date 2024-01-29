#include "main.h"
/**
 * _strlen - prints the length of a string
 * @str: string parameter
 * Return: int
 */
int _strlen(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;
	return (index);
}

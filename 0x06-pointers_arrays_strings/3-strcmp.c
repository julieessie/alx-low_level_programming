#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: a pointer to a character that will be modified
 * @s2: a pointer to a character that will be modified
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
char *str_b = s1;
char *str_c = s2;

while (*str_b != '\0' && *str_c != '\0' && *str_b == *str_c)
{
str_b++;
str_c++;
}
return (*str_b - *str_c);

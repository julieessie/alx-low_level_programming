#include "main.h"
/**
 *_isalpha - checks for alphabetic character.
 *@c: Is the character thats to be checked
 *Return: 1 if character is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

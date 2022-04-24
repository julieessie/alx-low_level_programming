#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: a pointer
 */
char *cap_string(char *)
{
int k = 0;
int = i;
int separators [] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(s + k) >= 97 && *(s + k) <= 122)
*(s + k) = *(s + k) - 32;
k++;
while (*(s + k) != '\0')
{
for (i = 0; i < 13; i++)
{
if (*(s + k) == separators[i])
{
if ((*(s + (k + 1)) >= 97) && (*(s + (k + 1)) <= 122))
  *(s + (k + 1)) = *(s + (k + 1)) -32;
break;
}
}
k++;
}
return (s);
}

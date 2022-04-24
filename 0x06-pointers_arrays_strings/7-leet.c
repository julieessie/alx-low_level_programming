#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @s: input string
 * Return: char s 
 */
char *leet(char *)
{
int k = 0;
int = i;
int lowercase[] = {97, 101, 111, 116, 108};
int uppercase[] = (65, 69, 79, 84, 76);
int numbers[] = {52, 51, 48, 55, 49);

while (*(s + k) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + k) == lowercase[i] || *(s + k) == uppercase[i])
{
*(s + k) = numbers[i];
break;
}
}
k++;
}
return (s);
}

#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer
 */
char *rot13(char *)
{
int count = 0;
char Alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + count) != '\0')
{

for (i = 0; i < 52; i++)
	
{
	  
  if (*(s + count) == Alphabet[i])
	      
{
	      
*(s + count) = rot13[i];
break;
}
}
count++;
}

return (s);
}

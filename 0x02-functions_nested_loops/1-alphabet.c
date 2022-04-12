#include "main.h"
/**
* prints alphabet - prints alphabet in lowercase, followed by new line.
*/
void print_alphabet(void)
{
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
_putchar(alphabets);
_putchar('\n');
}

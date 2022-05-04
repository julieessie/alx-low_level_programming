#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed into it
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%i|n", argc -1);
return (0);
}

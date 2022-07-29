#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
hash_table_t *hash_p;

hash_p = hash_table_create(1024);
printf("%p\n", (void *)hash_p);
return (EXIT_SUCCESS);
}

#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arg passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str_p;

va_list l;

va_start(l, format);
while (format[i])
{
switch (format[i])
{
case 'c':

printf("%c", (char) va_arg(l, int));
break;

case 'i':

printf("%d", va_arg(l, int));
break;

case 'f':
printf("%f", (float) va_arg(l, double));
break;
case 's':
str_p = va_arg(l, char*);
if (str_p != NULL)
{
printf("%s", str_p)
break;
}
printf("(nil)");
break;
}
if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's') && format[(i + 1)] != '\0')
printf(", ");
i++;
}
va_end(l);
printf("\n");
}

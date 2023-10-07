#include <stdio.h>
/**
* main - start point of the program
* Return: always must be 0 in case you are using int if you using void
* no need to return keyword
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

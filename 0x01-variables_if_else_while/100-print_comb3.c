#include <stdio.h>
/**
* main - start point of the program
* Return: always must be 0 in case you are using int if you using void
* no need to return keyword
*/
int main(void)
{
int counter_1, counter_2;
for (counter_1 = '0'; counter_1 < '9'; counter_1++)
{
for (counter_2 = counter_1 + 1; counter_2 <= '9'; counter_2++)
{
if (counter_2 != counter_1)
{
putchar(counter_1);
putchar(counter_2);
if (counter_1 == '8' && counter_2 == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

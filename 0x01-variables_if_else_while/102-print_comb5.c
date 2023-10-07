#include <stdio.h>
/**
* main - start point of the program
* Return: always must be 0 in case you are using int if you using void
* no need to return keyword
*/
int main(void)
{
int counter_1, counter_2;
for (counter_1 = 0; counter_1 <= 98; counter_1++)
{
for (counter_2 = counter_1 + 1; counter_2 <= 99; counter_2++)
{
putchar(counter_1 / 10 + '0');
putchar(counter_1 % 10 + '0');
putchar(' ');
putchar(counter_2 / 10 + '0');
putchar(counter_2 % 10 + '0');
if (counter_1 == 98 && counter_2 == 99)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

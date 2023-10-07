#include <stdio.h> 
 /** 
  * main - start point of the program 
  * 
  * Return: always must be 0 in case you are using int if you using void 
  * 
  *  no need to return keyword 
  */ 
  
 int main(void) 
 { 
 /* a netsed for loop program  need 2 counters */ 
 int counter_1, counter_2; 
 /for that task we don't need to print pair values such 22,33 and so on/ 
 /* the frist loop to print values from 0 to 8 */ 
 /as like the frist digit like 01,02,03,.. and so on/ 
 /the increment value obtained from the second loop/ 
 for (counter_1 = '0'; counter_1 < '9'; counter_1++) 
 { 
 /* the second loop to print the second digit from 1 to 9 */ 
 /* as like x1,x2,x3..and so on x getting from frist loop */ 
 /* and its value for frist round is 0*/ 
 /but here will print 01 because we increment the first counter_1 by 1/ 
 /* and assign the value to be the start of the second counter_2*/ 
 /so the frist value we obtained is 0 from frist loop and 1 for the second/ 
 for (counter_2 = counter_1 + 1; counter_2 <= '9'; counter_2++) 
 { 
 /* continue keyword to drop 2 pair values such as 22,33  so always start with*/ 
 /* a unique value in the chain until frist loop rich 8*/ 
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

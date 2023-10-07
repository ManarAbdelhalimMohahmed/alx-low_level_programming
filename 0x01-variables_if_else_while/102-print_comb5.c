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
 /* a nested for loop program  need 2 counters */ 
         int counter_1, counter_2; 
 /* the frist loop to print values from 0 to 9*/ 
 /* and to specify the total rounds */ 
 /* that the code will run for that will be 98 round */ 
 /* the frist digit like 0x x will be changable for frist round*/ 
 /* like 01,02,03 .. and so on*/ 
 /* so the increment digit in frist round getting from the scond for loop */ 
         for (counter_1 = 0; counter_1 <= 98; counter_1++) 
         { 
 /* the second loop to print the secod digit from 1 to 9 */ 
 /*this until 09 after that counter_1 will increamet by 1 */ 
 /repeating the same operation for 97 other round/ 
                 for (counter_2 = counter_1 + 1; counter_2 <= 99; counter_2++) 
                 { 
 /the frist line will be always 0 until counter_1 will be greater than 10/ 
                         putchar(counter_1 / 10 + '0'); 
 /*that line to determin the value of the first digit of pair value */ 
                         putchar(counter_1 % 10 + '0'); 
                         putchar(' '); 
 /the frist line will be always 0 until counter_2 will be greater than 10/ 
                         putchar(counter_2 / 10 + '0'); 
 /*that line to determin the value of the second digit of pair value */ 
                         putchar(counter_2 % 10 + '0'); 
 /*to stop the programe befefor put (,) and space after last round */ 
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

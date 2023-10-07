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
 /* initialize a counter that hold the value of number as char */ 
 /* very important note we can not use counter<=10 */ 
 /* because putchar take only one char and if i give it 2 char */ 
 /* leads to a buffer overflow so be carfule when using putchar to hold */ 
 /* data from user's input */ 
 int counter; 
 for (counter = '0'; counter <= '9'; counter++) 
 { 
 putchar(counter); 
 } 
 putchar('\n'); 
         return (0); 
 }

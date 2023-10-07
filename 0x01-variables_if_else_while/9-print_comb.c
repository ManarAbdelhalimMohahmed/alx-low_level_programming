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
 /* initialize a counter that hold the value of char as 1=a ,2=b and so on*/ 
 int n; 
 /* frist loop for lower case */ 
 for (n = '0'; n <= '9'; n++) 
 { 
 putchar(n); 
 if (n != '9') 
 { 
 putchar(','); 
 putchar(' '); 
 } 
 } 
 putchar ('\n'); 
         return (0); 
 }

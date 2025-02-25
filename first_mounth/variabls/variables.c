//day 2 
// i learned about int  
#include <stdio.h>
#include <limits.h>
int main() {

// Declaring variables       
int a;
int age = 25;          // Integer variable
float height = 56.922;    // Floating-point variable
char grade = 'A';      // Character variable
double pi = 3.14159;   // Double precision floating-point variable

// Printing variable values
printf("%d\n",age);
printf("Age: %d\n", age); // %d used for print decimsl value
printf("Height: %.1f feet\n", height);
printf("Grade: %c\n", grade);
printf("Value of Pi: %.5lf\n", pi);

unsigned int var = UINT_MAX ; //u 4 bit
int var2  = INT_MIN ; //  4 bit 
int var3 = INT_MAX ; // 4 bit
printf ( "max unsigned : %u \nmin : %d\nMax : %d ",var ,var2 ,var3); // %u used for print unsigned decimal value 

unsigned short int var4  = USHRT_MAX; //u2 bit 
short int var5  = SHRT_MAX; // 2 bit 
short int var6  = SHRT_MIN; // 2 bit
printf ( "\nmax unsigned : %u \nmin : %d\nMax : %d ",var4 ,var5 ,var6);
return 0;
}




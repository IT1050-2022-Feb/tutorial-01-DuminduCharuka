/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float avg,mark1,mark2;
   
   printf("%s","enter the frist subject marks :");
   scanf("%f",&mark1);
   printf("%s","enter the second subject marks :");
   scanf("%f",&mark2);
   
   avg = (mark1+mark2)/2;
   
   printf("average is : %.1f",avg);
  return 0;
}


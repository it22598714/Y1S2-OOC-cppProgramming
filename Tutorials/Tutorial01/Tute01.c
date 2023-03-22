/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  float marks1, marks2, avg;

  printf("Enter the marks of subject 1 : ");
  scanf("%f", &marks1);

  printf("Enter the marks of subject 2 : ");
  scanf("%f", &marks2);

  avg = (marks1 + marks2) / 2;
  printf("Average = %.2f", avg);

  return 0;
}

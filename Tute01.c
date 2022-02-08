/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int submark1 , submark2 ;
	float average;
	
	printf("Inter The Frist Subject Mark : ");
	scanf("%d", &submark1);
	
	printf("Inter The Second Subject Mark : ");
	scanf("%d", &submark2);
	
	average = (submark1 + submark2) / 2;
	printf( "Average Score Is Two Subject %.2f", average );
	
  
  return 0;
}


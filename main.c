#include <stdio.h>
#include <stdlib.h>

//Write a program that reads 10 numbers from the keyboard and finf their sum and average

int main(void) 
{
  int i, j, sum = 0, avr, k = 10;

  for (j = 1; j <= 10; j++)
    {
      printf("Please enter a number:\t");
      scanf("%d", &i);
      system("clear");

      if (i < 0)
      {
        printf ("Sorry wrong input\n");
        break;
      }
      sum = sum + i;
      avr = sum / k;
      
    }

  printf("The sum of the numbers are %d\n\n", sum);
      
  printf("The average of the numbers is %d\n\n", avr);
  
printf("\nEnd of program\n\n");
  sleep (5);
  system("clear");
  printf("Welcome user,");
  
  return 0;
}
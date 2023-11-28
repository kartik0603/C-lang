/*

Q.11 Write a Program to print the below pattern using nested for loop.
           *
         * * *
       * * * * *
     * * * * * * *
   * * * * * * * * *
*/

#include <stdio.h>

int main()
{
  int i, j, s;

  for (i = 1; i <= 5; i++)
  {
    for (s = 5; s > i; s--)
    {
      printf(" ");
    }

    for (j = 1; j <= i; j++)
    {
      printf("*");
    }

    for (j = i - 1; j >= 1; j--)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
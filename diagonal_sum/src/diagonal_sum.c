/*
 ============================================================================
 Name        : diagonal_sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
	  int a[40][40];
	  int r1, c1, sum = 0;
	  printf("Enter the row count and column count of the matrix ");
	  fflush(stdout);
	  scanf("%d %d", &r1, &c1);
	  fflush(stdout);

	  printf("Enter values into the matrix");
	  fflush(stdout);

	  for (int i = 0; i < r1; i++) {
	    for (int j = 0; j < c1; j++){
	      scanf("%d", &a[i][j]);
	    }
	  }

	  for (int i = 0; i < r1; i++) {
	    for (int j = 0; j < c1; j++) {
	      if (i == j) {
	        sum = sum + a[i][j];
	      }
	    }
	  }

	  printf("\n The sum of the diagonal elements are %d \t",sum);
	return EXIT_SUCCESS;
}

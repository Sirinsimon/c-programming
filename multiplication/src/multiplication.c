/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int a[40][40], b[40][40], c[40][40];
	  int r1, c1, r2, c2, sum = 0;
	  printf("\n Enter the row and col of the 1st matrix: \n");
	  scanf("%d %d", &r1, &c1);

	  printf("\n Enter the row and col of the 2nd matrix: \n");
	  scanf("%d %d", &r2, &c2);

	  if (c1 != r2) {
	    printf("\n Matrix cannot be multiplied");
	    return 0;
	  }

	  printf("\n Enter values into first matrix \n ");
	  for (int i = 0; i < r1; i++) {
	    for (int j = 0; j < c1; j++) {
	      scanf("%d", &a[i][j]);
	    }
	  }

	  printf("\n Enter values into second matrix \n ");
	  for (int i = 0; i < r2; i++) {
	    for (int j = 0; j < c2; j++) {
	      scanf("%d", &b[i][j]);
	    }
	  }
	  printf("\n The first matrix is \n ");
	  for (int i = 0; i < r1; i++) {
	    printf("\n");
	    for (int j = 0; j < c1; j++) {
	      printf("%d  ", a[i][j]);
	    }
	  }

	  printf("\n The second matrix is \n ");
	  for (int i = 0; i < r2; i++) {
	    printf("\n");
	    for (int j = 0; j < c2; j++) {
	      printf("%d  ", b[i][j]);
	    }
	  }

	  for (int i = 0; i < r1; i++) {
	    for (int j = 0; j < c2; j++) {
	      for (int k = 0; k < c1; k++) {
	        sum += a[i][k] * b[k][j];
	      }
	      c[i][j] = sum;
	      sum = 0;
	    }
	  }

	  printf("\n The resultant matrix is \n ");
	  for (int i = 0; i < r1; i++) {
	    for (int j = 0; j < c2; j++) {
	      printf("%d \t  ", c[i][j]);
	    }
	    printf("\n");
	  }
	return EXIT_SUCCESS;
}

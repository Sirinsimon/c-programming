/*
 ============================================================================
 Name        : transpose_matrix.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		int a[40][40];
		int r1,c1;
		printf("Enter the row count and column count of the matrix ");
		 fflush(stdout);
		scanf("%d %d",&r1,&c1);

		printf("Enter values into the matrix");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				 fflush(stdout);
				scanf("%d",&a[i][j]);
			}
		}

		printf("The matrix before transpose is \n ");

		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("%d \t",a[i][j]);
			}
			printf("\n");
		}


		printf("The transpose of the matrix is \n");
		for(int i=0;i<c1;i++){
			for(int j=0;j<r1;j++){
				printf("%d \t",a[j][i]);
			}
			printf("\n");
		}


	return EXIT_SUCCESS;
}

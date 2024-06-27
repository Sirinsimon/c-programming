/*
 ============================================================================
 Name        : sum_matrix.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[40][40],b[40][40],c[40][40];
		int r1,c1,r2,c2;
		printf("Enter the row count and column count of the matrix ");
		scanf("%d %d",&r1,&c1);
		printf("Enter the row count and column count of the matrix2 ");
		scanf("%d %d",&r2,&c2);
		if(r1 != r2 || c1 !=c2){
			printf("Matrix must be in same order");
			return 0;
		}
		printf("Enter values into the matrix 1");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}

		printf("Enter values into the matrix 2 \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				scanf("%d",&b[i][j]);
			}
		}

		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				c[i][j] = a[i][j] + b[i][j];
			}
		}

		printf("matrix1 is \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("%d \t",a[i][j]);
			}
			printf("\n");
		}

		printf("matrix2 is \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("%d \t",b[i][j]);
			}
			printf("\n");
		}


		printf("The matrix after addition is \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c1;j++){
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}


		return 0;
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a[10][10],i,j,r,c,sum=0;
	printf("enter the row of the matrix");
	scanf("%d" ,&r);
	printf("enter the column");
	scanf("%d",&c);
	printf("enter the matrix elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
		if(r==c)
			{for(i=0;i<r;i++){
				for(j=0;j<c;j++)
				{
					if(i==j)
					{ sum=sum+a[i][j];
					}
				}
			}


	printf("sum of diagonal ek]lements of the matrix:%d",sum);
			else{
		printf("sum not possible");
	}
	return EXIT_SUCCESS;
			}
}

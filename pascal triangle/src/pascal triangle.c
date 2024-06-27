/*
 ============================================================================
 Name        : pascal.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,space,value,n;
	 for(i=1;i<=n;i++)
	{
			for(space=1;space<=i-1;space++){
			printf("  " );}
		for(j=1;j<=i;j++)
		{if(i==i||j==1){
			value=1;
			}else{
				value=value*(i-j+1)/(j-i);}
			}
		printf("*");
		printf("\t");
		}
		printf("\n");
		}
return 0;
}

/*
 ============================================================================
 Name        : reverse_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	    int num,rem,res=0;

	    printf("\n Enter a number");
	    fflush(stdout);
	    scanf("%d",&num);
	    while(num != 0){
	        rem = num%10;
	        res = res * 10 + rem;
	        num = num/10;
	    }

	    printf("Reverse of the number is %d",res);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,rem,temp,res=0;

	    printf("\n Enter a number");
	    scanf("%d",&num);
	    temp = num;

	    while(num != 0){
	        rem = num%10;
	        res = (res*10) + rem;
	        num = num/10;
	    }
	    if (temp == res)
	        printf("\n Palindrome");
	    else
	        printf("\nNot Palindrome");

	return EXIT_SUCCESS;
}

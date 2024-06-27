/*
 ============================================================================
 Name        : project1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char operator;
    float num1, num2, result;
    printf("Enter operator  ");
    fflush(stdout);
    scanf("%c", &operator);
    printf("Enter two numbers:\n ");
    fflush(stdout);
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f\n", result);
            break;
        case '/':
                result = num1 / num2;
                printf("Result: %f\n", result);

            break;
        default:
            printf("Error! Invalid operator.\n");
    }
	return EXIT_SUCCESS;
}

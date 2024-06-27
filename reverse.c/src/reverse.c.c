/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[50], strrev[50];
  int strlen = 0;

  printf("\nEnter the first string \t");
  gets(str1);

  for (strlen = 0; str1[strlen] != '\0'; strlen++);

  for (int i = 0; i < strlen; i++) {
    strrev[i] = str1[strlen - i - 1];
  }
  printf("\n %s", strrev);
	return 0;
}

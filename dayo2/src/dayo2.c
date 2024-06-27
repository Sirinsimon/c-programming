#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,sum;

	printf("enter two num");
	scanf("%d %d",&a,&b);
	setvbuf(stdout, NULL, _IONBF, 0);
	sum=a+b;
	printf("sum is= %d",sum);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

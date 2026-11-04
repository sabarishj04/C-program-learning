#include <stdio.h>
int main() 
{
	int i,n;
	printf("Enter the number to print it's multiplication table:");
	scanf("%d",&n);
	for (i=1; i<11; i++) {
		printf("%d x %d = %d \n",n,i,i*n);
	}
	return 0;
}

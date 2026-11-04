#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a is greatest number\n");
		}
		else
		{
			printf("c is greaterst number\n");
		}
	}
	else
	{	if (b>c)
		printf("b is greatest number\n");
	
		else{
			printf("c is greaterst number\n");
		}
    }
	return 0;
}


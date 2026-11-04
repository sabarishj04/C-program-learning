#include<stdio.h>
void main()
{
	int a[10][10],i,j,sumr,sumc;
	for (i=0;i<3;i++)
	{
		sumr=0;
		for (j=0;j<3;j++)
		{
			printf("Enter element %d %d: ",i,j);
			scanf("%d",&a[i][j]);
			sumr=sumr+a[i][j];
		}printf("The sum of %d row is %d \n",i,sumr);
	}
	for (j=0;j<3;j++)
	{
		sumc=0;
		for(i=0;i<3;i++)
		{
			sumc+=a[i][j];	
		}printf("sum of %d column is %d \n",j,sumc);
	}		
}

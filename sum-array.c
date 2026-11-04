/*#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5};
	int b[]={10,20,30,40,50};
	int sum[5],i;
	for(i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
		printf("\n%d",sum[i]);
	}
	for(i=0;i<5;i++)
	
	
}*/
#include<stdio.h>
void main(){
	int a[]={1,2,3,4,5},i,j=4;
	printf("{");
	for (i=0;i<5;i++)
	{
	printf("%d,",a[j-i]);
	}
	printf("}");
}

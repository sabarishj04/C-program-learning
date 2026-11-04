#include<stdio.h>

int main()
{
int n,i;
float sum=0,avg;
printf("Enter how many numbers to be add:");
scanf("%d",&n);
for (i=1;i<=n;i++){
	int value;
	printf("Enter the number%d:",i);
	scanf("%d",&value);
	sum+=value;
}
	
avg=sum/n;
printf("The average of %d numbers is %.2f",n,avg);

}

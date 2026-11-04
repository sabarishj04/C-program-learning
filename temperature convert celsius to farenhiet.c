#include <stdio.h>
int main()
{
	float celsius, fahernhiet;
	
	printf("Enter value of Temperature in celsius:");
	scanf("%f",&celsius);
	fahernhiet=(1.8*celsius)+32;
	printf("The Temperature %.2f Degree Celsius in Fahernhiet is %.2f",celsius,fahernhiet);	
	return 0;
}

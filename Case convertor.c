#include <stdio.h>
#include <string.h>
int main()
{
	char str[10]="KPRiet";
	int i;
	for (i=0;str[i]!='\0';i++)
	{
		
		if (str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
		else if (str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
	}printf("%s",str);
	
}

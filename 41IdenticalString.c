#include<stdio.h>
int main()
{
	char a[100],b[100],i,flag=0;
	gets(a);
	gets(b);
	if(strlen(a)==strlen(b))
	{
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
			flag=1;
			else
			{
				flag=0;
				break;
			}
		}
	}
	
	if(flag==1)
	printf("The strings are IDENTICAL!");
	else if(flag==0)
	printf("The strings are NOT IDENTICAL.");
	
	return 0;
}

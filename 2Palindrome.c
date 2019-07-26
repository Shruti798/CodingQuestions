#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int i,j=strlen(a)-1,flag=0;
	for(i=0;i<strlen(a)/2 +1;i++)
	{
		if(a[i]==a[j])
		flag=1;
		else
		{
			flag=0;
			break;
		}
		j=j-1;
	}
	if(flag==1)
	printf("Given string is a Palindrome!");
	else
	printf("Given string is NOT a Palindrome");
	
	return 0;
}

#include<stdio.h>
int length(char s[50],int *p)
{
	int j=0;
	while(*p!='\0')
	{
		j++;
		p++;
	}
	return j;
}
int main()
{
	char s[50];
	gets(s);
	
	int len=length(s,&s);
	printf("Length of string is: %d",len);
	
	return 0;
}

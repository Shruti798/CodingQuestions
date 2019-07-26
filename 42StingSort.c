#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	gets(s);
	printf("Before Sorting:\n%s\n",s);
	int i,j,min;
	char temp;
	for(i=0;i<strlen(s);i++)
	{
		min=i;
		for(j=i;j<strlen(s);j++)
		{
			if(s[j]<s[min])
			min=j;
		}
		temp=s[i];
		s[i]=s[min];
		s[min]=temp;
	}
	printf("After Sorting:\n%s",s);
	
	return 0;
}

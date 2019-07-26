#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	
	int f=0,l=strlen(a)-1,i;
	for(i=0;i<strlen(a);i++)
	{
		b[f]=a[l];
		l=l-1;
		f=f+1;
	}
	printf("Reverse of string is: \n%s",b);
	
	/* strrev(a);
	printf("Reverse of string is: \n%s", a); */
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	char a[50],b[50];
	printf("Enter the input string: ");
	gets(a);
	
	int *p,i=0;
	while(a[i]!='\0')
	{
		p=&a[i];
		b[i]=*p;
		i++;	
	}
	b[i]='\0';	

	printf("%s",b);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10],i,l,s;
	
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	l=a[0],s=a[1];
	if(l<s)
	{
		s=a[0];
		l=a[1];
	}
	
	for(i=2;i<10;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
		else if(a[i]<s)
		{
			s=a[i];
		}
	}
	printf("Largest Element= %d and smallest Element= %d",l,s);
	return 0;
}

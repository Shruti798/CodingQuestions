#include<stdio.h>
int main()
{
	int a[10],i,l;
	
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	l=a[0];
	
	for(i=1;i<10;i++)
	{
		if(a[i]>l)
		l=a[i];
	}
	printf("Largest Element is: %d",l);
	return 0;
}

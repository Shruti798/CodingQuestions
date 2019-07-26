#include<stdio.h>
int main()
{
	int a[10],i,s,flag=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("\nEnter search element: ");
	scanf("%d",&s);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==s)
		{
		printf("Element found at position %d",i+1);
		flag=1;
		break;
		}
	}
	if(flag==0)
	printf("Element not found!");
	return 0;
}

#include<stdio.h>
int main()
{
	int a[10],i,l,h,mid,s,flag=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("Enter search element: ");
	scanf("%d",&s);
	
	l=0,h=9;
	while(l<h)
	{
		mid=(l+h)/2;
		if(a[mid]==s)
		{
			printf("Element found at position %d",mid+1);
			flag=1;
			break;
		}
		else if(a[mid]>s)
		{
			h=mid-1;
		}
		else if(a[mid]<s)
		{
			l=mid+1;
		}
	}
	if(flag==0)
	printf("Element not found!");
	return 0;
}

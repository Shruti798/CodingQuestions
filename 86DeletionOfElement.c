#include<stdio.h>
int main()
{
	int n,i,e,flag=0;
	printf("Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter element to be deleted: ");
	scanf("%d",&e);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			--n;
			flag=1;
			for(i;i<n;i++)
			a[i]=a[i+1];
		}
	}
	
	if(flag==0)
	printf("Element not in array!");
	else
	{
	printf("After deletion:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	}
	
	return 0;
}

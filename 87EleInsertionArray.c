#include<stdio.h>
int main()
{
	int n,i,e,p;
	printf("Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter element to be inserted and it's position: ");
	scanf("%d%d",&e,&p);
	
	for(i=n;i>=p;i--)
	a[i]=a[i-1];
	
	a[p-1]=e;
	
	printf("After Insertion:\n");
	for(i=0;i<=n;i++)
	printf("%d ",a[i]);
	
	
}

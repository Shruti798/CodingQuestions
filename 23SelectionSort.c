#include<stdio.h>
int a[100],n;
void selection()
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main()
{
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int i;
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	selection();
	
	printf("After sorting: \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

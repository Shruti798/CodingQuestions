#include<stdio.h>
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	insertion(a,n);
	
	return 0;
}

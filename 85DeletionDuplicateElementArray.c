#include<stdio.h>
int main()
{
	int n,j,i,k;
	printf("Array Size :");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				k=i;
				while(k<n)
				{
					a[k]=a[k+1];
					k++;
				}
				n--;
			}
		}
	}
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
}

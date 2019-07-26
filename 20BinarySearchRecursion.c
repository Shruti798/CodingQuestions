#include<stdio.h>
int binary(int *p,int se,int l,int h)
{
	int mid,flag=0;
	mid=(l+h)/2;
	if(p[mid]==se)
	{
		flag=1;
		return mid+1;
	}
	else if(p[mid]>se)
	binary(p,se,l,mid-1);
	else if(p[mid]<se)
	binary(p,se,mid+1,h);
	else
	return flag;
}
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n],i,s,result;
	
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter Search Element: ");
	scanf("%d",&s);
	
	result=binary(a,s,0,n-1);
	
	if(result==0)
	printf("Element Not Found!");
	else 
	printf("Element found at position %d",result);
	
	return 0;
}

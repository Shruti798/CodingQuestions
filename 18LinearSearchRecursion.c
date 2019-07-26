#include<stdio.h>
int linear(int *p,int se,int j)
{
	if(p[j]==se)
	return j+1;
	else 
	linear(p,se,j+1);
}
int main()
{
	int n;
	printf("Enter array length: ");
	scanf("%d",&n);
	
	int a[n],i,s,result;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter search element: ");
	scanf("%d",&s);
	
	result=linear(a,s,0);
	
	if(result>n)
	printf("Element not found!");
	else
	printf("Element found at position %d",result);
	
	return 0;
}

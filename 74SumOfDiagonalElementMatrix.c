#include<stdio.h>
int main()
{
	int a,i,j,sum=0;
	printf("Enter order of Matrix: ");
	scanf("%d",&a);
	
	int m[a][a];

	printf("Enter matrix elements:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		scanf("%d",&m[i][j]);
	}
		
	for(i=0;i<a;i++)
	{
		sum=sum+m[i][i];
	}
		
	printf("Sum of diagonal element is: %d",sum);
	
	return 0;
}

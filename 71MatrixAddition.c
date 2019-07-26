#include<stdio.h>
int main()
{
	int a,i,j,sum=0;
	printf("Enter order of Matrix: ");
	scanf("%d",&a);
	
	int m[a][a],n[a][a],p[a][a];

	printf("Enter elements of first matrix:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		scanf("%d",&m[i][j]);
	}
	printf("Enter element of second matrix: \n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		scanf("%d",&n[i][j]);
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		p[i][j]=m[i][j]+n[i][j];
	}
	
	printf("After Multiplication:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

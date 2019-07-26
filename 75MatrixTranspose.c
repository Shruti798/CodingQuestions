#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("Enter Matrix dimension: ");
	scanf("%d%d",&a,&b);
	
	int m[a][b],n[b][a];
	printf("Enter matrix elements:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		scanf("%d",&m[i][j]);
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			n[j][i]=m[i][j];
		}
	}
	
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

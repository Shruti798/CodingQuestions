#include<stdio.h>
int main()
{
	int a,b,c,d,i,j,k,sum=0;
	printf("Enter the dimension of matrices: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
		
	if(b==c)
	{
		int m[a][b],n[c][d],p[a][d];
		
		printf("Enter elements of First Matrix:\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			scanf("%d",&m[i][j]);
		}
		
		printf("Enter elements of Second Matrix:\n");
		for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
			scanf("%d",&n[i][j]);
		}
		
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				for(k=0;k<b;k++)
				{
					sum=sum+m[i][k]*n[k][j];
				}
				p[i][j]=sum;
				sum=0;
			}
		}
		
		printf("After Multiplication:\n");
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				printf("%d ",p[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("The matrices can't be multiplied!");
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c,d,sum=0,k;
	printf("Enter the dimensions of the matrixs: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	int m[a][b],n[c][d],i,j,r[a][d];
	
	printf("Enter elements of first matrix: \n");
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&m[i][j]);	
		}	
	} 
	
	printf("Enter elements of second matrix: \n");
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			scanf("%d",&n[i][j]);	
		}	
	} 
	
	if(b==c)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<d;j++)
			{
				for(k=0;k<c;k++)
				{
				sum=sum+(m[i][k]*n[k][j]);	
				}
				r[i][j]=sum;
		sum=0;
			}	
		}
		
	printf("The resultant matrix after multiplication:");
	for(i=0;i<a;i++)
	{
		printf("\n");
		for(j=0;j<d;j++)
		printf("%d\t",r[i][j]);		
	}
	}
	else
	printf("Multiplication of given matrix not possible!");
	
	return 0;
}

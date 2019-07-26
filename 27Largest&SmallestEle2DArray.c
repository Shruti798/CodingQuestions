#include<stdio.h>
int main()
{
	int r,c,l,s;
	printf("Enter the no of rows and columns of array: ");
	scanf("%d %d",&r,&c);
	
	int a[r][c],i,j,temp;
	printf("Enter %d array elements: ",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);	
	}
	l=a[0][0];
	s=a[0][1];
	if(l<s)
	{
		temp=l;
		l=s;
		s=temp;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>l)
			l=a[i][j];
			else if(a[i][j]<s)
			s=a[i][j];	
		}	
	}
	printf("Largest Element: %d \nSmallest Element: %d",l,s);
	
	return 0;
}

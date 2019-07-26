#include<stdio.h>
int main()
{
	int n,flag=0,i;
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i!=0&&n!=i)
		flag=1;
		else
		{
		flag=0;
		break;
		}
	}
	if(flag==1)
	printf("Prime Number!");
	else
	printf("Not a Prime Number.");
	return 0;
}

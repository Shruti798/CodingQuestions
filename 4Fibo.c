#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int f=0,s=1,n;
	printf("%d %d",f,s);
	num=num-2;
	while(num>0)
	{
		n=f+s;
		printf(" %d",n);
		f=s;
		s=n;
		num=num-1;
	}
	return 0;
}

#include<stdio.h>
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Interchanged values: %d, %d",a,b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}

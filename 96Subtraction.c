#include<stdio.h>
int sub(int a,int b)
{
	return a+~b+1;
}
int main()
{
	int a,b,dif;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	dif=sub(a,b);
	
	if(a>b)
	printf("The difference of given numbers is: %d",dif);
	else
	printf("The difference of given numbers is: %d",dif);
	
	return 0;
}

#include<stdio.h>
void display(int i)
{
	if(i>100)
	exit(0);
	else
	printf("%d ",i);
	
	display(i+1);
}
int main()
{
	int i=1;
	display(i);
	return 0;
}

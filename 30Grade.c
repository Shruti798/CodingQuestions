#include<stdio.h>
int main()
{
	int m;
	printf("Enter marks: ");
	scanf("%d",&m);
	
	if(m>=60)
	{
		printf("Your Grade: First");
	}
	else if(m>=50&&m<60)
	{
		printf("Your Grade: Second");
	}
	else if(m>=40&&m<50)
	{
		printf("Your Grade: Third");
	}
	else if(m<40)
	{
		printf("Your Grade: Failed");
	}
		
return 0;
}

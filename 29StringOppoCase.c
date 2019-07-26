#include<stdio.h>
int main()
{
	char s[500];
	int i=0;
	printf("Enter input String:\n");
	gets(s);
	
	while(i<strlen(s))
	{
		if(s[i]>='a'&&s[i]<='z')
		{
		s[i]=s[i]-32;
		i++;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
		s[i]=s[i]+32;
		i++;
		}
		else if(s[i]==' ')
		i++;
	}
	
	printf("%s",s);
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i;
	printf("Enter string :");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("The conversion  is %s",s);
}

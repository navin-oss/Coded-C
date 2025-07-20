#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char c;
	char s[20];
	printf("Enter any string :");
	gets(s);
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		c=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=c;
	}
	printf("The reverse of string is %s",s);
}

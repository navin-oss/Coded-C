#include<stdio.h>
void modify(char[],char[]);
void main()
{
	char str1,str2;
	str1="jenny";
	str2="navin";
	modify(str1,str2);
}
void modify(char str1[],char str2[])
{
	int i,l=0;
	for(i=0;str1[i]!='\0';i++)
	l=+1;
	printf("The length of string is %d,length");
	str2[1]='N';
	printf("%s %s ",str1,str2);
}

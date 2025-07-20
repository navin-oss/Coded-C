#include<stdio.h>
int main()
{
    int count=0,i;
	char name[30];
	printf("Enter name :");
	gets(name);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("The length of string is %d",count);
}

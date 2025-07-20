#include<stdio.h>
int main()
{
	char s1[]="Navin";
	char s2[]="Navin";
	int i,flag=0;
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
	if(s1[i]!=s2[i])
	flag=1;
	break;
	}
	if(flag==1)
	{
		printf("Strings are not same");
	}
	else{
		printf("strings are same");
	}
}

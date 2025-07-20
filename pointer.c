#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter any no.:");
	scanf("%f %f",&a,&b);
	int c,*ptr;
	printf("Enter any no.:");
	scanf("%d",&c);
	ptr=&a;
	ptr=&c;
	printf("%d",*ptr);
	}

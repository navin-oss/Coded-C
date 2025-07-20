#include<stdio.h>

union abc
{
	int a;
	char b;
	float c;
};
void main()
{
	union abc u;
	u.a=2;
	u.b=4;
	u.c=4.567;
	 printf("a=%d",u.a);
	 printf("b=%c",u.b);
	 printf("c=%f",u.c);
}

#include<stdio.h>
int main()
{
	int a=20 ,b=3;
	int *p,*q;
	p=&a;
	q=p;
	printf("a=%d %d %d ",a,*p,*q);
}

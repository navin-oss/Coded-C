#include<stdio.h>
int main()
{
	int a=20,b=2,c;
	int *p,*q;
	p=(&a,&b);
	//q=&b;
	c=*q;
	printf("value of a=%d \n",a);
	printf("a=%d \n",*p);
	printf("address of a=%x \n",&a);
	printf("address of a=%x \n",p);
	printf("address of a=%x \n",&p);
	printf("address of c=%x \n",&c);
	
	}


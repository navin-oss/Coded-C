#include<stdio.h>
int mian()
{
	void *p;
	int a=39;
	p=&a;
	printf("%d",*(int*)p);
	char c='a';
	p=&c;
	printf("%c \n",*(char*)p);
	float  b=10.345;
	p=&b;
	printf("%f \n",*(float*)p);
}

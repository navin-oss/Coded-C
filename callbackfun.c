#include<stdio.h>
void sum(int a,int b)
{
	printf("%d \n",a+b);
	}
	void sub(int a,int b)
{
	printf("%d \n",a-b);
	}
void display(void (*fptr)(int ,int ))
{
	(*fptr)(5,6);
}
void main()
{
	display(sum);
	display(sub);
}

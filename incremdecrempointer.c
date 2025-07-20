#include<stdio.h>
int main()
{
	int a[5]={1,4,3,5,4,8};
	int *p;
	p=&a[3];
	printf("%d %d ",*--p,*--p);
	printf("\n %d %d \n",*++p,*++p);
		printf("%d \n",*p);
	
}

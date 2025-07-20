#include<stdio.h>
int main()
{
	int a[5]={0,3,4,5,6};
	int *p=&a;
	printf("%d",*p);
	printf("Address of p is %u \n",p);
	p=p+1;
	//*p=2;
	printf("%d",*p);
		printf("Address of p is %u \n",p);

}

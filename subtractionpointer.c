#include<stdio.h>
int main()
{
	int a[]={2,4,3,0,-7},d,f;
	int *p=&a;
	int *q=&a[3];
     d=p-q;
	printf("p-q=%d \n",d);
	f=q-p;
	printf("q-p=%d \n",f);
	printf("Value %d \n",*q);
q=q-2;
printf("Value %d \n",*q);
p=p+2;
printf("q-p=%d",q-p);
}

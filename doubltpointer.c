#include<stdio.h>   
int main()
{
	int a;
	printf("Enter any no.:");
	scanf("%d",&a);
	int *p=&a;
	int **q=&p;
	int ***r=&q;
	*p=23;
	**q=633;

	printf("a=%d %d %d %d",a,*p,*(*q),***r);
printf("\n Address of q=%x %x",&q,r);
printf("\n Address of p=%x %x",&p,q);
}

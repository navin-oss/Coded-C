#include<stdio.h>
int main()
{
	int a[10],max,min,*p,i;
	printf("Enter elements in array:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	p=a;
	for(i=0;i<10;i++)
	{
if (*p>max)
max=*p;

if(*p<min)
min=*p;

p++;
}
printf("max=%d and min=%d",max,min);
}

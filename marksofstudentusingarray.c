#include<stdio.h>
int main()
{
 int i,a[5];
	float sum=0,avg;
	printf("Enters marks of students:");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		for (i=0;i<5;i++)
{

	sum=sum+a[i];
}
avg=sum/5;
printf("the avg is %f & sum is %f",avg,sum);
getch();
}

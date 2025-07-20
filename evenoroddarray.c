#include<stdio.h>
void main()
{
	int a[10];
	int even=0,odd=0,i;
	printf("Enter elements :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<10;i++)
{
	if(a[i]%2==0)
	even=even+1;
	else
	odd=odd+1;
}
printf(" The even numbers are: %d \n",even);
printf(" The odd numbers are:%d \n",odd);

}

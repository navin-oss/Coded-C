#include<stdio.h>
int main()
{
  int a1[5],a2[5],s[5];
  int i;
  printf("Enter elements of 1st array:");
  for(i=0;i<5;i++)
  {
  	scanf("%d",&a1[i]);
  }
    printf("Enter elements of 2st array:");
      for(i=0;i<5;i++)
      {
      	  	scanf("%d",&a2[i]);
	  }
	        for(i=0;i<5;i++)
    {
    	s[i]=a1[i]+a2[i];
    	printf("The sum of elements at index %d is %d \n",i,s[i]);
	}
}

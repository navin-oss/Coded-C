#include<stdio.h>
int main()
{
	int a[3][3],i,j,sr,sc;
	printf("Enter elements of matrix:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d \t",a[i][j]);
				}
				printf("\n");
	}
	for(i=0;i<3;i++)
	{ 
		sr=sc=0;
		for(j=0;j<3;j++)
		{
		    sr=sr+a[i][j];
		    sc=sc+a[j][i];
		}
		printf("sr=%d and sc=%d \n",sr,sc);
	}
}

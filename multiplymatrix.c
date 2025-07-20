#include<stdio.h>
#define N 50
int main()
{
	int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
	printf("Enter Row and column of first matrix :\n");
	scanf("%d %d",&m,&n);
	printf("Enter elements of first matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Row and column of 2nd matrix :\n");
	scanf("%d %d",&p,&q);
	printf("Enter elements of 2nd matrix: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("First matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("Second matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	if(n!=p)
	{
	printf("We cannot multiply.");
	}
	else
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			sum=0;
			for(k=0;k<m;k++)
			{			
			sum=sum+(a[i][k]*b[k][j]);	
			}
			c[i][j]=sum;
		}
	}
		printf("Multiplication of matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
		
	}
	


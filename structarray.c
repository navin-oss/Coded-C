#include<stdio.h>
struct student
{
	int Rollno;
	char name[20];
	float marks;
	
	};
	void main()
{
int i;
struct student s[3];

	for(i=0;i<3;i++)
	{
			scanf("%d %s %f",&s[i].Rollno,&s[i].name,&s[i].marks);
	}
	for(i=0;i<3;i++)
	{
			printf("%d %s %f",s[i].Rollno,s[i].marks,s[i].marks);
		}
	
	
}

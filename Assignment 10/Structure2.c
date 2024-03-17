#include<stdio.h>
#include<conio.h>
struct student
{
	int roll,age;
	char name[16];
}s[5];
int main()
{	
	for(int i=0;i<5;i++)
	{
	
	printf("Enter the roll no \n");
	scanf("%d",&s[i].roll);
	printf("Enter the student name \n");
	scanf("%s",s[i].name);
	printf("\n Enter age of the student\n");
	scanf("%d",&s[i].age);
	}

	printf("\n\n Roll No	Name		Age	");
	for(int i=0;i<5;i++)
	printf("\n	%3d 	%s 	%2d",s[i].roll,s[i].name,s[i].age);
	return 0;
}
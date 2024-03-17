#include<stdio.h>
struct student
{
	int roll,age,mark;
	char name[16];
};
int main()
{	char n[16];
	struct student s1;
	printf("Enter the student name \n");
	gets(s1.name);
	printf("\n Enter Roll no ,age and marks\n");
	scanf("%d%d%d",&s1.roll,&s1.age,&s1.mark);
	printf("\n\n 	Name			Roll No		Age		Marks");
	printf("\n %16s		%6d 		%2d 		%3d",s1.name,s1.roll,s1.age,s1.mark);
	
}
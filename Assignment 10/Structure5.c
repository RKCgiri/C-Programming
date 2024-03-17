#include<stdio.h>
struct student
{
	int roll,math,chem,phy;
	float per;
	char name[16];
	
} s[5];
int main()
{
	for(int i=0;i<5;i++)
	{
	
	printf("Enter the roll no \n");
	scanf("%d",&s[i].roll);
	printf("Enter the student name \n");
	scanf("%s",s[i].name);
	printf("\n Enter chemistry,math,physics marks of the student\n");
	scanf("%d%d%d",&s[i].chem,&s[i].math,&s[i].phy);
	}
	for(int i=0;i<5;i++)
		{
			s[i].per=(float)(s[i].chem+s[i].math+s[i].phy)/100;
			
		}
	printf("\n\nName		Roll	math_marks	physics_marks	chemistry_marks		persentage");
	for(int i=0;i<5;i++)
		printf("\n%s	%3d		%3d		%3d		%3d		%f",s[i].name,s[i].roll,s[i].math,s[i].phy,s[i].chem,s[i].per);
return 0;
}

#include<stdio.h>
int main()
{
	char str1[16],j,str2[16],*s1,*s2,i;
	printf("Enter 1st string \n");
	scanf(" %[^\n]s",str1);
	printf("Enter 2st string \n");
	scanf(" %[^\n]s",str2);
	s1=str1;
	s2=str2;
	while(str1[i]!='\0')
		{
			++s1;
			i++;
		}
	while(str2[j]!='\0')
		{
			*s1=*s2;
			s1++;
			s2++;
			j++;
		}
	printf("%s",str1);
	
}
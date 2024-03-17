#include<stdio.h>
#include<string.h>
int main()
{
	char s1[16],s2[10],i,j=0;
	printf("Enter the charter \n");
	gets(s1);
	printf("Enter the charter \n");
	gets(s2);
//	j=strlen(s1);
for(i=0;s1[i]!='\0';i++)
	j++;
for(i=0;s2[i]!='\0';i++)
	s1[j++]=s2[i];
	/*for(i=0;s2[i]!='\0';i++)
		{
			s1[j+i]=s2[i];
		}*/
//	strcat(s1,s2);	
	puts(s1);//The concatination created on 1 st array
	puts(s2);
	return 0;
}
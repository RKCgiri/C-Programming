#include<stdio.h>
int copy(char *str1,char *strc1)
{
		while(*str1!='\0')
		{
			*strc1++=*str1++;
		//	str1++;
			//strc1++;
		}
		*strc1='\0';
		
}
int main()
{	
	char strc[16],str[16];
	printf("Enter the string \n");
	gets(str);
	
	copy(str,strc);
	printf("Coppid string is %s",strc);
	return 0;
}
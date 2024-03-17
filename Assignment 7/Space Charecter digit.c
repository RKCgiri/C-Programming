#include<stdio.h>
#include<ctype.h>
int main()
{
	int s=0,d=0,sp=0,i=0;
	char a[16];
	printf("Enter the string \n");
	gets(a);
	while(a[i]!='\0')
		{
			if(isalpha(a[i]))
				sp++;
			else if(isdigit(a[i]))
					d++;
				else
					s++;
			i++;
			
		}
	printf("%d %d %d",s,sp,d);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],i,c=0,a2[10];
	printf("Enter the charter \n");
	gets(a);
	
	int l=0;
	int h=strlen(a)-1;
	while(h>1)
		{
			if(a[l++]!=a[h--])
				{
					printf("Not pallindrome ");
					return 0;
				}
		}
printf(" Pallindrome");
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[16],i,c=0;
	printf("Enter the charter \n");
//	gets(a);
scanf(" %[^\n]s",a);
  	int l=strlen(a);
  	puts(a);
	printf("%d",l);
	for(i=0;a[i]!='\0';i++)
		{
			c++;
		}
	printf(" %d",c);
return 0;
}
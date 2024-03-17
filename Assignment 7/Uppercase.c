#include<stdio.h>
#include<string.h>
int main()
{
	char a[16],i,c=0,au[16],al[16];
	printf("Enter the charter \n");
	gets(a);
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]>='a' && a[i]<='z')
	  	a[i]=a[i]-32;	
	}
	
		puts(a);
		
		for(i=0;a[i]!='\0';i++)
	{
	  if(a[i]>='A' && a[i]<='Z')
	  	a[i]=a[i]+32;	
	}
	puts(a);
	
 
return 0;	
	
}
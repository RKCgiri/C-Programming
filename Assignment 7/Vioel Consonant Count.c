#include<stdio.h>
#include<string.h>
int main()
{
	char a[16],i,v=0,c=0;
	printf("Enter the charter \n");
	gets(a);
		for(i=0;a[i]!='\0';i++)
		{  
		   if(a[i]=='a'|| a[i]=='A' || a[i]=='e'|| a[i]=='E'|| a[i]=='i'|| a[i]=='I'|| a[i]=='o'||a[i]=='O'|| a[i]=='u'||a[i]=='U')
				v++;
		    else
		    	c++;
		}
	printf("No of vioel is %d\n",v);
	printf("No of consonant is %d",c);
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[16],b[16],t=0,f=0;
	printf("Enter the 1st string \n");
	gets(a);
	printf("Enter the 2st string \n");
	gets(b);
/*	t=strcmp(a,b);
	if(t==0)
		printf("Same");
	else
		printf("Not");*/
	int l1,l2;
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		printf("Not");
	else 
		{
			{
		    	for(int i=0;i<l1;i++)
			    	if(a[i]!=b[i])
				    	{
				    		f=1;
							break;
 				    	}	
			}
	    
		if(f==0)
			printf("Same");
		else
			printf("Not");
			
		}
return 0;
}
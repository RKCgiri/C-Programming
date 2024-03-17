#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],i,j=0,r[10],l,k=1;
	printf("Enter the charter \n");
	gets(a);
	l=strlen(a);
//	j=l-1;
	for(i=l-1;i>=0;i--)
		{
			r[j]=a[i];
			j++;
		}
	puts(r);	
	for(i=0;i<l;i++)
		if(a[i]!=r[i])
		{
			printf(" not pallindtome \n");
			break;
			}	
		else 
			 k=0;
		if(k==0)
		printf("pallindrome");
	//strrev(a);	
   puts(a);
   printf("\n %s",a);
return 0;
} 
    
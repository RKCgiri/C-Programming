q#include<stdio.h>
#include<string.h>
int main()
{
	char a[16],i=0,j;
	printf("Enter the char \n");
	gets(a);
  	int l=strlen(a);
  	puts(a);
  	while(i<l)
  		{
  			if(a[i]==' ')
  				{
  					for(j=i;j<=l;j++)
  						{
  							a[j]=a[j+1];
						  }
					l--;  
				  }
			i++;	  
		  }
	puts(a);
	return 0;
}
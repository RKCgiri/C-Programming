#include<stdio.h>
int main()
{
	int n,s=0,i,a=-1;
	printf("Enter the no of terms \n");
	scanf("%d",&n);
	printf(" The series is s = ");
	
	for(i=1;i<=n;i++)
		{   a=a+2;
			s=s+a;
			 if(i<n)
				{
					printf("%d + ",a);
				}
			 else
			 	printf("%d",a);
		
		}	
	printf("\n The sum of the series is %d",s);	
return 0;
}
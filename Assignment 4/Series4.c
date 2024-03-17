#include<stdio.h>
int main()
{
	int n,i,a=0;
	float s=0;
	printf("Enter the no of terms \n ");
	scanf("%d",&n);
	printf(" The series is s = ");
	
	for(i=1;i<=n;i++)
		{   a=a+1;
			s=s+(float)1/a;
			 if(i==1)
				{
					printf("1 + ");
				}
			 else if(i<n)
						{
				        	printf("1/%d + ",a);
			        	}
			        else
			        	printf("1/%d",a);
		
		}	
	printf("\n The sum of the series is %f",s);	
return 0;
}
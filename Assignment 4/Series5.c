#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a,x,s=0;
	printf("Enter the no of terms ");
	scanf("%d",&n);
	printf("Enter the value of x ");
	scanf("%d",&x);
	printf(" The series is s = ");
	
	for(i=0;i<n;i++)
		{   a=pow(x,i);
			s=s+a;
			 if(i==0)
				{
					printf("1 + ");
				}
			 else if(i<n-1)
						{
				        	printf("x^%d + ",i);
			        	}
			        else
			        	printf("x^%d ",i);
		
		}	
	printf("\n The sum of the series is %d",s);	
return 0;
}
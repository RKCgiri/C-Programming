#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a=0,f=1,x;
	float s=0;
	printf("Enter the no of terms \n ");
	scanf("%d",&n);
	printf("Enter the value of x ");
	scanf("%d",&x);
	printf(" The series is s = ");
	
	for(i=0;i<n;i++)
		{   a=i*x;
			for(int j=1;j<=i;j++)
				f=f*j;
			s=s+(float)a/f;
			 if(i==0)
				{
					printf("1 + ");
				}
			 else if(i<n-1)
						{
				        	printf("i*x / %d! + ",i,i);
			        	}
			        else
			        	printf("i*x / %d!",i,i);
		
		}	
	printf("\n The sum of the series is %f",s+1);	
return 0;
}
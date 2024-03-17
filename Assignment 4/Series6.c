#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a=0,f=1;
	float s=0;
	printf("Enter the no of terms \n");
	scanf("%d",&n);
	printf(" The series is s = ");
	
	for(i=1;i<=n;i++)
		{   a=a+1;
			for(int j=1;j<=a;j++)
				f=f*j;
			s=s+(float)1/f;
			 if(i==1)
				{
					printf("1 + ");
				}
			 else if(i<n)
						{
				        	printf("1/%d! + ",a);
			        	}
			        else
			        	printf("1/%d!",a);
		
		}	
	printf("\n The sum of the series is %f",s);	
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float root1,root2,real=0,img=0;
	printf("Enter the value of a,b,c \n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
		{
			root1=(float)(-b+sqrt(d))/(2*a);
			root2=(float)(-b-sqrt(d))/(2*a);
			printf("The roots are different \n the value of root1=%f \n root2=%f",root1,root2);
			
		}
	else if(d==0)
		{
			root1=root2=(float)-b/(2*a);
			printf("The roots are eqal \n the value of root1=%f \n root2=%f",root1,root2);
			
		}	
        else
			{
				real=(float)-b/(2*a);
				img=sqrt(-d)/(2*a);
				printf("The roots are imaginary \n root =%f +- %fi",real,img);
			}
return 0;				
}
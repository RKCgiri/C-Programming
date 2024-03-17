#include<stdio.h>
#include<math.h>
int main()
{	int n;
	float x,y;
	printf("Enter the value of x and n \n");
	scanf("%f%d",&x,&n);
/*	if(n==1)
		y=1+pow(x,2);
	else if(n==2)
		y=1+(float)x/n;
		else if(n==3)
			y=1+2*x;
			else
				y=1+n*x;*/
	switch(n)
	{
		case 1:
			y=1+pow(x,2);
			break;
		case 2:
			y=1+(float)x/n;
			break;
		case 3:
				y=1+2*x;
				break;
		default:
				y=1+n*x;
				}			
	printf("\n the value of y is %f",y);
return 0;	
}
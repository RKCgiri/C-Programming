#include<stdio.h>
float power(int b,int e)
{
	if(e==0)
		return 1;
	if(e>0)
		return b*power(b,e-1);
	if(e<0)
		return (1/power(b,-e));
		
}

int main()
{
	int base,exponant;
	printf("Enter the value of base and exponant \n");
	scanf("%d%d",&base,&exponant);
	
	printf("The the value of the power is %f",power(base,exponant));
return 0;
}
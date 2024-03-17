#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,c,sum=0,l;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	l=log10(n);
    while(n!=0)
	{
		c=n%10;
		sum=sum+pow(c,l+1);
		n=n/10;
		
	}
	if(num==sum)
	printf("The number is armstrong");
	else 
	printf("Not armstrong");
return 0;
}
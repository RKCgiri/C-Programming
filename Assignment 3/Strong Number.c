#include<stdio.h>
#include<math.h>
int factorial(int r)
{   int fact =1;
	for(int i=1;i<=r;i++)
	{
	fact=fact*i;
	
	}
	return fact;
}
int main()
{
	int num,n,s=0,rim=0,l=0;
	printf("Enter the number ");
	scanf("%d",&n);
	num=n;

	l=log10(num);
	for(int i=0;i<=l;i++)
	{
		rim=n%10;
		s=s+factorial(rim);
		n=n/10;
		
	}

/*		while(n!=0)
	{
		rim=n%10;
		s=s+factorial(rim);
		n=n/10;
		
	}*/
	if(num==s)
     	printf(" The number %d is Strong Number ",num);
	else 
		printf(" The number %d is not Strong Number ",num);	
return 0;
}
#include<stdio.h>
int GCD(int a,int b)
{
	if(b!=0)
		return GCD(b,a%b);
	else
		return a;
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
int gcd	=GCD(n1,n2);
	printf("Gcd=%d",gcd);
}
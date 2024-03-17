#include<stdio.h>
int fact(int);
int main()
{
	int n,i,r,f;
	float ncr;
	printf("Enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	f=fact(n);
	printf("\n The value of factorial is %d",f);
	ncr=(float)f/(fact(r)*fact(n-r));
	printf("\n The value of nCr is %f",ncr);
return 0;
}
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
		f=f*i;
	return f;
}
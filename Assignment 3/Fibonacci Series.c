#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i=3;
	printf("Enter the term no \n");
	scanf("%d",&n);
	printf("\n The fibonacci series id : %d , %d ",a,b);
	for(;i<=n;i++)
	{
		c=a+b;
		printf(", %d",c);
		a=b;
		b=c;
	}
return 0;	
}
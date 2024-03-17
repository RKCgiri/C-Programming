#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		if(n%i==0)
			s=s+i;
	if(n==s)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
return 0;		
}
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,flage=0;
	printf("Enter the number \n");
	scanf("%d",&n);
if(n<=1)
	printf("NOT Prime");
else{
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			flage=1;
	if(flage==0)
		printf("Prime number");
	else
		printf("NOT Prime");
   }
return 0;
}
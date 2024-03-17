#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,rev=0,rim=0,l=0;
	printf("Enter the number ");
	scanf("%d",&n);
	num=n;

/*	l=log10(num);
	for(int i=0;i<=l;i++)
	{
		rim=n%10;
		n=n/10;
		rev=rev*10+rim;
		
	}*/

		while(n!=0)
	{
		rim=n%10;
		rev=rev*10+rim;
		n=n/10;
		
	}
	if(num==rev)
     	printf(" The number %d is pallindrome ",num);
	else 
		printf(" The number %d is not pallindrome ",num);	
return 0;
}
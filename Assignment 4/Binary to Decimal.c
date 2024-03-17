#include<stdio.h>
#include<math.h>
int main()
{
	int i,j=0,s=0,n;
	printf("Enter a no of bit of the  binary number \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the binary number \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
		{
			s=s+a[i]*pow(2,j);
			j++;
		}
	printf("The decimal no is %d",s);
return 0;
}
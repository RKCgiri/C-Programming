#include<stdio.h>
int main()
{
	int n,a[16],i=0,r;
	printf("Enter the number \n");
	scanf("%d",&n);
	int m=n;
	while(m>1)
		{
			r=m%2;
			m=m/2;
			a[i]=r;
			i++;
		}
		a[i]=1;
	
	for(int j=i;j>=0;j--)
		printf("%d",a[j]);
return 0;
} 
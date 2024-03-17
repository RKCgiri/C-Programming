#include <stdio.h>
int main()
{
	int n,i,p[6];
	printf("Enter the no of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("The  elements of a is  \n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	
	for(i=0;i<n;i++)
		{
			a[i]=*(p+n-1-i);
		}
	printf("\n The  elements of b is  \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
return 0;	
}
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		

		printf("The elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n After ight rotare \n");
	for(i=0;i<n;i++)
	{
		printf(" \t \t ");
		printf("%d",a[i]);
		printf("\n");
		
	}
	printf("After left rotate \n");
	
		for(i=n-1;i>=0;i--)
	{
		printf(" \t \t ");
		printf("%d",a[i]);
		printf("\n");
		
	}

	return 0;
}
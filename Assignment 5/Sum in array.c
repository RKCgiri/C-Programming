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
	for(i=0;i<n;i++)
		sum=sum+a[i];
	float avg;
	avg=(float)sum/n;
	printf("The sum of the %d number element is %d \n ",n,sum);
	printf("The varage of the numbers is %f",avg);
	return 0;
}
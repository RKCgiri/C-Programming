#include<stdio.h>
int main()
{
	int n,i,sum=0,item,count=0;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to check the frequency \n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
		if(a[i]==item)
			{
				  count++;
			}
	printf(" The frequency of the element is %d ",count);
	if(count==0)
	printf("The element is not present in the array");
return 0;
}
#include<stdio.h>
void main()
{
	int n,i,sum=0,item,index=-1;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the number to search \n");
	scanf("%d",&item);
	for(i=0;i<n;i++)
		if(a[i]==item)
			{
				  printf(" The item is found at %d th position \n",i+1);
				  index=i;
			}
	if(index==-1)
	printf("The element is not present in the array");
}
#include<stdio.h>
int main()
{
	int i,j,t,n;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	for(i=0;i<n-2;i++)
		{
			int min_ind=i;
		for(j=i+1;j<n;j++)
			{
				if(a[j]<a[min_ind])
					min_ind=j;
			}
		if(min_ind!=i)
			{
				int temp=a[min_ind];
				a[min_ind]=a[i];
				a[i]=temp;
			}
		}
	printf("The shorted array is \n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));		
return 0;
}
	
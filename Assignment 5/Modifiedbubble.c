
#include<stdio.h>
int main()
{
	int i,j,t,n;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	int a[n],f=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
					{
						f++;
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
					}
			}
		if(f==0)
			break;
		}
	printf("\n The seris in ascending order is ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
return 0;
}
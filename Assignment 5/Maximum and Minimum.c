#include<stdio.h>
int main()
{
	int n,i,sum=0,item,index1=1,index2=1;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int min=a[0],max=a[0];
	for(i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				 max=a[i] ;
				  index1=i+1;
			}
				if(a[i]<min)
			{
				 min=a[i] ;
				  index2=i+1;
			}
		}
			
			
   printf(" The maximum is %d at %d th position",max,index1);
	
	printf("\n The minimum is %d at %d th position",min,index2);
return 0;
}
	
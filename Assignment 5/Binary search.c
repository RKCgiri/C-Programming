//It is only for increseing series
#include<stdio.h>
int main()
{
	int i,j,l,h,m,n,item,index=-1;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	int a[n];
	h=n-1;
	l=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to search \n");
	scanf("%d",&item);
	while(l<=h)
	{   
        m=(l+h)/2;	
		if(a[m]==item)
		{
			index=m;
			break;
		}
		else if(a[m]>item)
				h=m-1;
			else
			    l=m+1;
		
	}
if(index==-1)
	printf("The element is not present in the array");
else
	printf("The element is found at %d th position",index+1);
return 0;
}
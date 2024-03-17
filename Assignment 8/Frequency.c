#include<stdio.h>
int frequency(int a[],int n,int num,int p)
{
	int i;
	for(i=0;i<n;i++)
		{
			if(a[i]==num)
				p++;
		}
};
void main()
{
	int i,n,num,f=0;
	printf("Enter the size of the array \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array element \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("Enter the no to find frequency \n");
		scanf("%d",&num);
	f=frequency(a,n,num,f);
	if(f==0)
		printf("The element is not present in the array");
	else
		printf("the frequency of the no %d",f);
	
}
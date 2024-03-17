#include<stdio.h>
int main()
{
	int n,i,j,num,*p;
	printf("Enter the n \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	p=a;
	printf("Serach");
	scanf("%d",&num);
	for(i=0;a[i]!='\0';i++)
		{
			if(*p==n)
				printf("Present");
			p++;	
		}
}
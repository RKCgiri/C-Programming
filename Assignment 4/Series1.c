#include<stdio.h>
int main()
{
	int n,s=0,i,a=1;
	printf("Enter the no of terms ");
	scanf("%d",&n);
	printf(" The series is s = %d",a);
	s++;
	for(i=1;i<n;i++)
		{
			printf(" + %d",++a);
			s=s+a;
		}	
	printf("\n The sum of the series is %d",s);	
return 0;
}
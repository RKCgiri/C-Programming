#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b \n");
	scanf("%d%d",&a,&b);
  /*  c=a;
	a=b;
	b=c; */
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping the value of a is %d \n b is %d ",a,b);
return 0;		
}
#include<stdio.h>
void swap(int * a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int x,y;
	printf("Enter the value of x and y \n");
	scanf("%d%d",&x,&y);
	printf("\n Before swapinig the value of x =%d aand y=%d",x,y);
	swap(&x,&y);
	printf("\n After swapinig the value of x =%d and y=%d",x,y);
return 0;
}
#include<stdio.h>
void big(int * a,int *b)
{
	if(*a>*b)
		printf("The value of x =%d is big ",*a);
	else
		printf("The vale of y =%d is big",*b);
		
}
int main()
{
	int x,y;
	printf("Enter the value of x and y \n");
	scanf("%d%d",&x,&y);
	big(&x,&y);
return 0;	
}
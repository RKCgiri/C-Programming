#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter the two number \n");
	scanf("%d%d",&n1,&n2);
	switch(n1>n2)
	{
		case 1:
			printf("%d is big",n1);
			break;
		default:
			printf("%d is big",n2);	
	}
return 0;
}
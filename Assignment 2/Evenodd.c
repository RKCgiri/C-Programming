#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	switch(n%2)
	{
		case 1:
			printf("Odd");
			break;
		default:
		printf("Even");	
	}

return 0;
}
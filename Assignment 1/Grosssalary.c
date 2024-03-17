#include<stdio.h>
int main()
{
	 int gs,bs,DA,HRA;
	 printf("Enter basic salary:");
	 scanf("%d",&bs);
	 DA=bs*.74;
	 HRA=bs*.15;
	 gs=bs+DA+HRA;
	 printf("\n His gross salary is %d",gs);
return 0;	 
}
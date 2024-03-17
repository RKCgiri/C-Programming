#include"stdio.h"
int main()
{
	int ibill,fbill,bill;
	printf("Enter the initial and final units in the meater \n");
	scanf("%d%d",&ibill,&fbill);
	bill=(fbill-ibill)*3.75;
	printf("\n the bill is %d",bill);
return 0;	
}
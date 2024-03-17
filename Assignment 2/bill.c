#include"stdio.h"
int main()
{
	int ibill,fbill,d;
	float bill;
	printf("Enter the initial and final units in the meater \n");
	scanf("%d%d",&ibill,&fbill);
	d=fbill-ibill;
	if(d<=200)
		bill=d*.50;
	else if(d<=400)
			bill=100+(d-200)*.65;
		 else if(d<=600)
		 		bill=250+(d-400)*.80;
		 	  else 
		 	  	bill=425+(d-600)*1.25;
	
	printf("\n the bill is %f",bill);
return 0;
}
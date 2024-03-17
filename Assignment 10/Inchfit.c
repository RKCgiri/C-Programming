#include<stdio.h>
struct cal
{
	int inch,fit;
};
int main()
{	int cary=0;
	struct cal a[3];
	for(int i=0;i<2;i++)
	{
			printf("Enter the fit and inch \n");
			scanf("%d%d",&a[i].fit,&a[i].inch);
				
	}
	a[2].inch=a[0].inch+a[1].inch;
	if(a[2].inch>=12)
		{
			cary++;
			a[2].inch=a[2].inch-12;
			
		}
	a[2].fit=a[0].fit+a[1].fit+cary;
	printf("The addition is %d fit %d inch",a[2].fit,a[2].inch);
}
#include<stdio.h>
struct cal
{
	int real,img;
};
int main()
{	
	struct cal a[3];
	for(int i=0;i<2;i++)
	{
			printf("Enter the complex no \n");
			scanf("%d%d",&a[i].real,&a[i].img);
				
	}
	a[2].img=a[0].img+a[1].img;

	a[2].real=a[0].real+a[1].real;
	printf("The addition is %d + %2di ",a[2].real,a[2].img);
	
}
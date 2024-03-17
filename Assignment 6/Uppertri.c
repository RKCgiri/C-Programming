#include<stdio.h>
int main()
{
  int i,j,a[10][10],n,f=0;
  printf("Enter the oder of the matrix \n");
  scanf("%d",&n);
  printf("Enter the element of the matrix \n");
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
	  	scanf("%d",&a[i][j]);
  printf("The matrix is \n");
  for(i=0;i<n;i++)
  	{
	 for(j=0;j<n;j++)
	  	printf("%d ",a[i][j]);
	 printf("\n");
    }
  printf("lower triangulae matrix is \n");
     for(i=0;i<n;i++)
  	   {
		for(j=0;j<n;j++)
  			if(i<=j)
  				printf("%d ",a[i][j]);
  			else
			  printf("* ");
		printf("\n");
		}
return 0;
}
		  	
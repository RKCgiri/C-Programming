#include<stdio.h>
int main()
{
  int i,j,n,s=0;
  printf("Enter the oder of the matrix \n");
  scanf("%d",&n);
  int a[n][n];
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
 printf("Enter the multiplicant \n");
 scanf("%d",&n);   
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
  	   a[i][j]=n*a[i][j];
  printf(" After the multipliction The  matrix is \n");
  for(i=0;i<n;i++)
  	{
	 for(j=0;j<n;j++)
	  	printf("%d ",a[i][j]);
	 printf("\n");
    }
    return 0;
}
		   
#include<stdio.h>
int main()
{
  int i,j,n,f1=0,s=0,f2=0;
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
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
  		if(a[i][j]!=0)
  		 f1++;
  		else
		  f2++;
 s=2*n/3;
if(f2>s)
  	printf("The matrix is Sparse matrix");  
else
	printf("The matrix is  not a Sparse matrix");  	
}	  		   
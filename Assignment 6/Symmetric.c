#include<stdio.h>
int main()
{
  int i,j,n,f=0;
  printf("Enter the oder of the matrix \n");
  scanf("%d",&n);
  int a[n][n],b[n][n];
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
  		b[j][i]=a[i][j];
  	printf("The transpose matrix is \n");
	for(i=0;i<n;i++)
       { 
	      for(j=0;j<n;j++) 
			printf("%d ",b[i][j]);
		printf("\n");
		}	
	for(i=0;i<n;i++)
  		for(j=0;j<n;j++)
  	 	  {
  	 	  	if(b[i][j]!=a[i][j])
          	   f=1;
				 break;		 
			 }
	if(f==0)
		printf("Symmetric");
	else
	    printf("Not symmetric");
}
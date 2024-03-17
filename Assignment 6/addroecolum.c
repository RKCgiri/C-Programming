#include<stdio.h>
int main()
{
  int i,j,a[10][10],n1,n2,f=0,r[10],c[10],k;
  printf("Enter the oder of the matrix \n");
  scanf("%d%d",&n1,&n2);
  printf("Enter the element of the matrix \n");
  for(i=0;i<n1;i++)
  	for(j=0;j<n2;j++)
	  	scanf("%d",&a[i][j]);
  printf("The matrix is \n");
  for(i=0;i<n1;i++)
  	{
	 for(j=0;j<n2;j++)
	  	printf("%d ",a[i][j]);
	 printf("\n");
    }
 for( k=0;k<n1;k++)
 	r[k]=0;
for( k=0;k<n2;k++)
 	c[k]=0;
	    
 for(k=0;k<n1;k++)
 	 for(j=0;j<n2;j++)
	  r[k]=r[k]+a[k][j]; 
for(k=0;k<n2;k++)
 	for(i=0;i<n1;i++)
	   c[k]=c[k]+a[i][k]; 
 printf("The sum of rows   are : \n");
 for(int k=0;k<n1;k++)
 	printf("%d ,",r[k]);
 	printf("\n");
printf("The sum of colum are : \n"); 	
for(k=0;k<n2;k++)
 	printf("%d ,",c[k]);
}
	    	  	    
    
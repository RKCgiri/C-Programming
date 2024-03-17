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
  for(i=0;i<n;i++)
  	for(j=0;j<n;j++)
	  if(i!=j)
	  	if(a[i][j]!=0)
		  {
		  	f=1;
		  	break;
		   } 
	  else if(a[i][j] != a[0][0 ])
		  		{
		  			f=1;
		  			break;
				}
 	  
 if(f==0)
 	printf("Identity matrix");
 else
 	printf(" Not identity matrix");	
 return 0;  	
}     

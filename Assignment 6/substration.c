#include<stdio.h>
int main()
{
  int i,j,r1,c1,r2,c2,f=0;
  printf("Enter the oder of the matrix \n");
  scanf("%d%d",&r1,&c1);
  int a[r1][c1],b[r1][c1],s[r1][c1];
  printf("Enter the element of the matrix \n");
  for(i=0;i<r1;i++)
  	for(j=0;j<c1;j++)
	  	scanf("%d",&a[i][j]);
  
   printf("Enter the oder 2nd  matrix \n");
  scanf("%d%d",&r2,&c2);  
   if(r1!=r2||c1!=c2)
   		printf("substration is not possible");
   	else
   	{
		printf("Enter the element of the 2nd matrix \n");
  for(i=0;i<r2;i++)
  	for(j=0;j<c2;j++)
	  	scanf("%d",&b[i][j]);
	  	
printf("The 1st matrix is \n");
  for(i=0;i<r1;i++)
  	{
	 for(j=0;j<c1;j++)
	  	printf("%d ",a[i][j]);
	 printf("\n");
    }
  printf("The 2nd matrix is \n");
  for(i=0;i<r2;i++)
  	{
	 for(j=0;j<c2;j++)
	  	printf("%d ",b[i][j]);
	 printf("\n");
    }
   	
  for(i=0;i<r1;i++)
  	for(j=0;j<c1;j++)
  		s[i][j]=a[i][j]-b[i][j];
printf("substraction of matrix is \n");
 for(i=0;i<r2;i++)
  	{
	 for(j=0;j<c2;j++)
	  	printf("%d ",s[i][j]);
	 printf("\n");
    }

}
}
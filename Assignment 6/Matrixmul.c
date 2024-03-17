#include<stdio.h>
int main()
{
	int n,m,i,j,k,sum,p,q;
	printf("Enter the value of row nd column \n");
	scanf("%d%d",&n,&m);
	int a1[n][m],a2[n][m],r[n][m];
	printf("enter the element of 1st matrix \n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a1[i][j]);
	
	printf("Enter the value of row nd column \n");
	scanf("%d%d",&p,&q);
	if(m!=p)
		printf(" not");
	else
	{
	printf("enter the element of 2st matrix \n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a2[i][j]);
	printf("The 1st matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				printf("%d ",a1[i][j]);
			}
		printf("\n");	
	
	}
	
	printf("The 2st matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				printf("%d ",a2[i][j]);
			}
		printf("\n");	
	}

for(i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
		 { 
 			sum=0; 
			for (k=0;k<m;k++) 
			{ 
				sum = sum+a1[i][k]*a2[k][j]; 
 			} 
 			r[i][j] = sum; 
		 } 
	
	}
	
	
	printf("The result matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				printf("%d ",r[i][j]);
			}
		printf("\n");	
	}
}
return 0;	
}
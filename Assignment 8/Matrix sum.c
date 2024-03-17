#include<stdio.h>
int matrixadd(int m1[][6],int m2[][6],int s[][6],int n1,int n2)
{
	for(int i=0;i<n1;i++)
		for(int j=0;j<n2;j++)
			{
				s[i][j]=m1[i][j]+m2[i][j];
			}
}
int main()
{
	int m1[6][6],m2[6][6],s[6][6],n1,n2,i,j;
	printf("Enter the no of row and column \n");
	scanf("%d%d",&n1,&n2);
	printf("Enter the elements of the 1st matrix \n");
	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			scanf("%d",&m1[i][j]);
	printf("Enter the elements of the 2st matrix \n");
		for(i=0;i<n1;i++)
			for(j=0;j<n2;j++)
				scanf("%d",&m2[i][j]);
	
	//function call
	matrixadd(m1,m2,s,n1,n2);
	printf("The 1st matrix is \n");
	for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
				printf("%d ",m1[i][j]);
			printf("\n");
		}
	printf("The 2st matrix is \n");
	for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
				printf("%d ",m2[i][j]);
			printf("\n");
		}
	printf("The sum matrix is \n");
	for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
				printf("%3d ",s[i][j]);
			printf("\n");
		}
return 0;
}
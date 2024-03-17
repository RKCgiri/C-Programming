#include<stdio.h>

int main(){
	int r,c;
	printf("Enter row size: ");
	scanf("%d",&r);
	printf("Enter column size: ");
	scanf("%d",&c);
	int arr1[r][c],arr2[r][c],s[r][c];
	printf("Enter the values: \n");
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("Enter value of arr1[%d][%d]: ",i,j);
			scanf("%d",(*(arr1+i)+j));
		
    	}
   	printf("The matrix is \n");
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
	     	{
		
			printf("%d ",*(*(arr1+i)+j));
		}
		printf("\n");
		}
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("Enter value of arr2[%d][%d]: ",i,j);
			scanf("%d",(*(arr2+i)+j));
		
    	}
   	printf("The matrix is \n");
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
	     	{
		
			printf("%d ",*(*(arr2+i)+j));
		}
		printf("\n");
		}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)	
		//	*(*(s+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
		*(s[i]+j)=*(arr1[i]+j)+*(arr2[i]+j);
	//sum matrix printing
		printf("The Sum of two matrix is \n");
	for(i=0;i<r;i++)
		{
		for(j=0;j<c;j++)
	     	{
		
			printf("%d ",*(*(s+i)+j));
		}
		printf("\n");
		}
	return 0;
}
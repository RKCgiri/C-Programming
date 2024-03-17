#include <stdio.h>

/*void fun(int *arr,int n){
	int temp[n];
	int i=0;
	for(i=0;i<n;i++){
		temp[i]=arr[i];
	}
	
	printf("After copying:\n");
	for(i=0;i<n;i++){
		printf("%d  ",temp[i]);
	}
	printf("\n");
}
*/
int main()
{
	int n,i;
	printf("Enter the no of elements \n");
	scanf("%d",&n);
	int a[n],p[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("The  elements of a is  \n");
	for(i=0;i<n;i++)
		printf("%d  ",*(p+i));
		printf("\n");
	for(i=0;i<n;i++)
		a[i]=*(p+i);
		printf("The coppid value is \n ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

	//fun(a,n);
return 0;	
}
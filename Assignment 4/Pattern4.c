#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    int a[n][n];
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
    int c=1;
       for(j=1;j<=i;j++)
        {
            printf("%2d  ",c);
            c=c*(i-j)/j;
        }
    /*for(i=0;i<n;i++)
	{
	  for(j=1;j<=i;j++)
    	{	if(i==1 || j==1)
    			printf(" 1");
    		else
    			{
    				a[i][j]=a[i-1][j]+a[i-1][j-1];
				}
				printf("%2d",a[i][j]);	
		}*/
    
        printf("\n");
    }
    return 0;
}

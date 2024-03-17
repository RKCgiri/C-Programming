#include<stdio.h>
int main()
{
	int n,i,j,k,sum=0,item,count=0;
	printf("Enter the number of elements \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
i=0;
		while(i<n)
  		{	
  		for(j=i+1;j<n;j++)
  			if(a[i]==a[j])
  				{
  					for(k=j;k<=n;k++)
  						{
  							a[k]=a[k+1];
						  }
					n--; 
					j--; 
				  }
			i++;	  
		  }
for(i=0;i<n;i++)
		printf("%d ",a[i]);
			
return 0;
}
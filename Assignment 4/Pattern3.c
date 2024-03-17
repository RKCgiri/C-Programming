#include<stdio.h>

int main() {
  int n,i,j,k;
  printf("enter the value of n \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
    for(j=1;j<=n-i;j++)
	 {
      printf("  ");
     }
    for(j=i;j<2*i;j++)
	 {
      printf("%d ", j);
     }
//    //P2 starts here
//    //each row starts with 2*(i-1) and then decrease i-1 times
    k=2*(i-1);
    for (j=1;j<=i-1;j++)
	 {
      printf("%d ",k--);
     }
printf("\n");
}
  return 0;
}


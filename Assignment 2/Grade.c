#include<stdio.h>
int main()
{
	int n,g;
	printf("Enter the number \n");
	scanf("%d",&n);
/*if(n<=100 && n>=0)
	if(n<90)
		if(n<80)
			if(n<70)
				if(n<60)
					if(n<50)
						if(n<40)
							printf("FAIlED");
						else
							printf("D");
     				else
						printf("C");
				else
					printf("B");
			else
				printf("A");
		else
			printf("E");		
	else
		printf("O");			
else
	printf("INVALID");	*/
				
g=n/10;
switch(g)
  {
	case 10:
    case 9:
    	printf("O");
    	break;
    case 8:
    	printf("E");
    	break;
    case 7:
    	printf("A");
    	break;
    case 6:
    	printf("B");
    	break;
    case 5:
    	printf("C");
    	break;
    case 4:
    	printf("D");
    	break;
    case 3:
    case 2:
    case 1:
    case 0:
    	printf("Fail");
    	break;
    default:
    	printf("INVALID"); 	
	}				
return 0;									
}
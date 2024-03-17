#include<stdio.h>
int main()
{
	char alp;
	printf("Enter the alphbet");
	scanf("%c",&alp);
	switch(alp)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("\n Vioel");
			break;
		default:
			printf("\n Consonent");
	}
return 0;
}
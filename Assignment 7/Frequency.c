#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[16],i,j;
	printf("Enter the string \n");
	scanf(" %[^\n]s",str);
	puts(str);
	int freq[26]={0};
	for(int i=0;i<strlen(str);++i){
		freq[tolower(str[i])-'a']++;
	}//hashing
	for(i=0;i<26;++i)
	{
		//if(i+'a'=='a')
		//	continue;
		if(freq[i]==0)
		 continue;

		printf("%c",(char)(i+'a'));
		printf(" ---- ");
		printf("%d\n",freq[i]);
	}
return 0;
}
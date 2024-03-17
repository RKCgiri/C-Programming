#include<stdio.h> 
void copystr(char*,char*); 
int main() 
{ 
             char str1[16];
             char str2[16]; 
             printf("enter the string \n");
             gets(str1);
             copystr(str2,str1); 
             printf("\nThe coppid string is = %s",str2); 
            return 0;
 } 
            void copystr(char *dest,char *src) 
       { 
                while(*src!='\0') 
                *dest++=*src++; 
                *dest='\0'; 
                return; 
       }


//#include<stdio.h> 
//#include<string.h>
//void copystr(char*,char*); 
//int main() 
//{ 
//             char*str1="I am Dinesh Thakur"; 
//             char *str2;
//             str2 = strdup(str1);
//             printf("\n %s",str2); 
// } 
//            void copystr(char *dest,char *src) 
//       { 
//                while(*src!='\0') 
//                *dest++=*src++; 
//                *dest='\0'; 
//                return; 
//       }
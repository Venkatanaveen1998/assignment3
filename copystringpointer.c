#include <stdio.h>
#include<string.h>
void string_copy(char *,char *);
int main()
{
   char str1[25],str2[25],*src,*dest,value;
   printf("enter the string data to copy\n");
   scanf("%s",str1);
   src=str1;
   dest=str2;
   string_copy(src,dest);
   printf("%s",dest);
  printf("\nnew length %ld",strlen(dest));
}
void string_copy(char *src,char *dest)
{
    while(*src!='\0')
    {
      *dest=*src;  
      *src++;
      *dest++;
    }
    *dest='\0';
}

#include <stdio.h>
#include <string.h>
int main()
{
   int i,n;
   char str[20];
   printf("Enter any string: ");
   scanf("%s",&str);
   n = strlen(str);
   printf("The reversed string is: ");
   for(i=n-1;i>=0;i--)
   {
       printf("%c",str[i]);
   }

}
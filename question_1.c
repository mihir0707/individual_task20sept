#include<stdio.h>
int main()
{
    int num,cube=1,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i = 0; i < 3; ++i) 
    {
        cube = cube * num;
    }
 
       printf("\n The cube of number is %d",cube);
}
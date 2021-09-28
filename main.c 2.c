\\write a c program to add four numbers 

#include <stdio.h>
#include <stdlib.h>     

int main()
{
    printf("this  program will add four numbers");
    int a,b,c,d,sum;
    printf("enter  the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    printf("enter the fourth number: ");
    scanf("%d",&d);
    sum = a + b + c + d;
    printf("the sum is: ");
    return 0;
}


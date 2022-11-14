#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("\nBefore value swapping value of a is:%d and value of b is:%d",a,b);
    //a=10,b=15;
    c = a;//c = 10;
    a = b;//a = 15;
    b = c;//b = 10;
    printf("\nAfter value swapping value of a is:%d and value of b is:%d",a,b);
}
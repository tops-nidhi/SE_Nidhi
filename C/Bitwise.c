#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 value:");
    scanf("%d%d",&a,&b);
    printf("\nBitwise and is:%d",a & b);
    printf("\nBitwise or is:%d",a | b);
    printf("\nBitwise XOR is:%d",a ^ b);
    printf("\nBitwise complimnet is:%d",~a);
    printf("\nBitwise shift left of a is:%d",a<<1);
    printf("\nBitwise shift right is:%d",a>>1);
}
#include<stdio.h>
int main()
{
    int a, b;
    float ans;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nAddtion is:%d",a+b);
    printf("\nSubstraction is:%d",a-b);
    printf("\nMultiplication is:%d",a*b);
    ans = a / b;
    printf("\nDivision is:%f",ans);
    printf("\nModulo is:%d",a%b);
    ++a;
    printf("\nAfter increment a is:%d",a);
    --b;
    printf("\nAfter decrement b is:%d",b);
    return 0;
}
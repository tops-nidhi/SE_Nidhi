#include<stdio.h>
void main()
{
    int a,b;
    printf("\nEnter 2 no:");
    scanf("%d%d",&a,&b);
    (a > b) ? (printf("\nA is max.")) : (printf("\nA is min"));
}
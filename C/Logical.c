#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 value:");
    scanf("%d%d",&a,&b);
    if (! (a < 10 || b > 10))
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 value:");
    scanf("%d%d",&a,&b);
    if (a != b)
    {
        printf("\nBoth are not equle.");
    }
    else
    {
        printf("\nBoth are equle.");
    }
    
    return 0;
}

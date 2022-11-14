#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter no to check whther it's positive or not:");
    scanf("%d",&a);
    if (a > 0)
        printf("No is Positive.");
    else if (a == 0)
    {
        printf("\nNo is zero.");
    }
    
    else
        printf("\nNo is negative.");
}
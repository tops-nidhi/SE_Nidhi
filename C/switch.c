#include<stdio.h>
void main()
{
    int expression;
    printf("\n1.Case1\n\ta.case a\n2.Case2\n3.Case3\n\ta.case a\n\nb.case b\n");
    printf("\nEnter your choice:");
    scanf("%d",&expression);
    switch (expression)
    {
    case 1:

        printf("\nThis is case 1.");
        break;
    case 2:
        printf("\nThis is case 2.");
        break;
    case 3:
        printf("\nThis is case 3.");
        break;
    default:
        printf("\nInvalid vhoice............");
        break;
    }
}
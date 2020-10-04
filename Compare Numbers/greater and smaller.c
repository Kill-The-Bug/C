#include <stdio.h>
int main()
{
    int a, b, c, d;
    
    printf("Enter first number \n");
    scanf("%d", &a);
    printf("Enter second number \n");
    scanf("%d", &b);
    printf("Enter third number \n");
    scanf("%d", &c);
    printf("Enter fourth number \n");
    scanf("%d", &d);
    a>b;

    if (a>b && a>c && a>d)
    {
        printf("%d is the greatest number \n", a);
    }
    else if (b>a && b>c && b>d)
    {
         printf("%d is the greatest number \n", b);
    }
     else if (c>a && c>b && c>d)
    {
         printf("%d is the greatest number \n", c);
    }
     else if (d>a && d>b && d>c)
    {
         printf("%d is the greatest number \n", d);
    }
     if (a<b && a<c && a<d)
    {
        printf("%d is the smallest number \n", a);
    }
    else if (b<a && b<c && b<d)
    {
         printf("%d is the smallest number \n", b);
    }
     else if (c<a && c<b && c<d)
    {
         printf("%d is the smallest number \n", c);
    }
     else if (d<a && d<b && d<c)
    {
         printf("%d is the smallest number \n", d);
    }
    printf("In the numbers you have given. \n");
    return 0;
}
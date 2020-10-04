#include <stdio.h>
int main()
{
    int marks;
    printf("Please enter your mark \n");
    scanf("%d",  &marks);
    if (marks<=100 && marks>=90)
    {
        printf("Your marks is %d and your grade is A \n", marks);
    }
    else if (marks<=90 && marks>=80)
    {
        printf("Your marks is %d and your grade is B \n", marks);
    }
    else if (marks<=80 && marks>=70)
    {
        printf("Your marks is %d and your grade is C \n", marks);
    }
    else if (marks<=70 && marks>=60)
    {
        printf("Your marks is %d and your grade is D \n", marks);
    }
    else
    {
        printf("Your marks is %d and your grade is F \n", marks);
    }
    
    return 0;
}
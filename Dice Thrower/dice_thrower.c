#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));
     num = rand() % 6 + 1;
    printf("The number is %d \n", num);
    return 0;
}
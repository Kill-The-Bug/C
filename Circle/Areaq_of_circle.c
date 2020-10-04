#include <stdio.h>
#include <math.h>
float circle(float area);
float para(float perimeter);
int main()
{
    float radius;
    printf("Enter the value of radius of your circle \n");
    scanf("%f", &radius);
    char ph='A', hp='P';
    printf("Enter capital A for area of the circle. \n Enter capital p for area of the perimeter. \n");
    scanf("%c", &ph, &hp);
    if (ph)
    {
        circle(radius);
    }
    else if (hp)
    {
        para(radius);
    }
    
   
    
}
float circle(float area)
{
    area = (22 / 7) * pow(area, 2);
    printf("The area of given circle is %fcm^2\n", area);
    return area;
}
float para(float perimeter)
{
    perimeter = 2 * 22 / 7 * perimeter;
    printf("The perimeter of given circle is %fcm\n", perimeter);
    return perimeter;
}

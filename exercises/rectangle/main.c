#include <stdio.h>

int main() {
    double width = 12.22;
    double height = 16.66;
    double perimeter = 0.0;
    double area = 0.0;
/*
    couldn't get this to work...

    printf("enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("enter the height of the rectangle: ");
    scanf("%f", &height); 
*/

    perimeter = 2 * (width + height);
    area = width * height;

    printf("the rectangle of width %.2f", width);
    printf(" and height %.2f", height);
    printf(" has a perimeter equal to %.2f\n", perimeter);

    printf("the rectangle of width %.2f", width);
    printf(" and height %.2f", height);
    printf(" has an area equal to %.2f\n", area);

    return 0;
}

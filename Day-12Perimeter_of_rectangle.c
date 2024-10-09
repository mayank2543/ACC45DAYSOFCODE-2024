#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    printf("Enter the value of a : ");
    scanf("%f", &a);

    printf("Enter the value of b : ");
    scanf("%f", &b);

    printf("Perimeter of rectangle = %f", 2*(a+b));
    return 0;
}

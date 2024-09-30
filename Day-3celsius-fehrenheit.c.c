#include <stdio.h>
#include <math.h>

int main() {
    float celsius, fehrenheit; //to convert celsius to fehrenheit
    printf("enter celsius : ");
    scanf("%f",&celsius);

    printf("Temperature in fehrenheit is %f",(celsius*9)/5 +32);

    return 0;
}

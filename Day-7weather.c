#include <stdio.h>


int main() {
    int temp;
    printf("Enter temp : ");
    scanf("%d",&temp);

    if (temp >= 25) {
        printf("It's hot outside \n");
    }
    else if(temp > 16 && temp < 24){
        printf("Neither too cold nor too hot \n");
    }
    else  {
        printf("It's too cold");
    }   
    return 0;
}

#include <stdio.h>
int main () {
    // checking that the number is divisible by 2
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("This is divisible by 2 \n",num);
    }
    else {
        printf("This is not divible by 2",num);
    } 
     
    return 0 ;
}
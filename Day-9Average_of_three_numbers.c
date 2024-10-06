#include <stdio.h>
int main () {
    int num1, num2, num3, sum;

    printf("Enter number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter number 2 : ");
    scanf("%d",&num2);

    printf("Enter number 3 : ");
    scanf("%d",&num3);

    sum = num1 + num2 + num3;

    // Average of three numbers is only applicable for natural number
    printf("Average of three numbers : %d",sum/3);  
     
    return 0 ;
}
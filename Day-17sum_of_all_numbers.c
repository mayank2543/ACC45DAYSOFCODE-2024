#include <stdio.h>
int main (){
    int n; //Here n is the last number
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int a; //Here a is the first number
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int sum = 0;

    for(int i = a; i <= n; i++) {
        sum += i;   
    }
    printf("Sum is %d",sum);
    return 0 ;
}
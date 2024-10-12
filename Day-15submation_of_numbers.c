#include <stdio.h>
int main (){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }

    printf("Sum is %d \n", sum); //sum till nth term

    return 0 ;
}


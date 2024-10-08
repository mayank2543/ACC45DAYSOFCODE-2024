#include <stdio.h>
int main () {
    int marks, Grade;
    printf("Enter the marks : ");
    scanf("%d",&marks);

    if (marks == 100) {
        printf("You passed with excellent grade A++");
    }
    else if(marks >= 90) {
        printf("You passed with A+");
    }
    else if (marks >= 80) {
        printf("You passed with A ");
    }
    else if (marks >= 70) {
        printf("You have passed with B+ ");
    }
    else if (marks >= 60){
        printf("You passed with B");
    }
    else {
        printf("You have not passed");
    }
    return 0 ;
}
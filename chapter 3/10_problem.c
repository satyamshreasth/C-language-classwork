#include<stdio.h>

int main(){
    int year;
    printf("enter year:");
    scanf("%d", &year);

    if((year % 4==0 && year % 100  != 0) || (year % 400 == 0)){
        printf("This is leap year");
    }
    else{
        printf("\nthis year is not leap year");
    }

    return 0;
}
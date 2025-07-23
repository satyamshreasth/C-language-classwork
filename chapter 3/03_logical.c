#include<stdio.h>

int main(){
    int a = 1; int b = 0;
    printf("The value of a and b is %d\n", a&&b); // and = &&
    printf("The value of a or b is %d\n", a||b);  // or = ||
    printf("The value of not(a) is %d", !a);      // not = ! (false to true, true to false)

    if(a && b){
        printf("both are true");
    }

    if (a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}
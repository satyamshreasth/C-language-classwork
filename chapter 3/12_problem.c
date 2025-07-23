#include<stdio.h>

int main(){
    int a = 56, b = 66, c = 88, d = 108;

    if(a>b && a>c && a>d){
        printf("the greatest of four no is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest of four no is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("the greatest of four no is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("the greatest of four no is %d", d);
    }
    return 0;
}
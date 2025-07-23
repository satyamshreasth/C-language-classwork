#include<stdio.h>

int main(){
    int i = 5;
    
    printf("the value of i is %d\n" , i);

    printf("the value of i is %d\n" , i++);

    printf("the value of i is %d\n" , ++i);

    //i++ print first and then increment i(post increment operater)
    //++i increment first and then print i  (post increment operater)

    i += 3;  // i = i + 3
    printf("the value pf i is %d\n" , i);
    return 0;
}
#include<stdio.h>

int main(){
    for (int i = 12; i; i--)
    {
        if(i==6)
        continue;  // skip this iteration now
        printf("the value of i is %d\n",i);
    }
    
    return 0;
}
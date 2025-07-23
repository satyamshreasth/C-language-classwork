#include<stdio.h>

int main(){
    int n,i = 1,  sum = 0;
    do
    {
        n = i*8;
        sum += n;
        printf("8 x %d = %d, sum = %d\n", i, n, sum);
        i++;
    } while (i<11);
    return 0;
}
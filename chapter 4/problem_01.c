#include<stdio.h>

int main(){
    int n , i = 1;
    printf("enter n : ");
    scanf("%d", &n);
    do
    {
        printf("%d * %d = %d\n", n , i, i * n );
        i++;
    } while (i<11);
    return 0;
}
    
    
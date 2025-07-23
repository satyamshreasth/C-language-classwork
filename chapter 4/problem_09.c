#include<stdio.h>

int main(){
    int n, i = 1, factorial = 1;
    printf("enter number:");
    scanf("%d",&n);
    while (i<=n){
    factorial *= i;
    i++;
    }
       
        printf("the factorial of the no is %d\n",factorial);
        
    
    
    return 0;
}
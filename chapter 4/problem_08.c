// #include<stdio.h>

// int main(){
//     int n, factorial = 1;
//     printf("enter number :");
//     scanf("%d", &n);
//     for (int i = 1; i <= n ; i++)
//     {
//         factorial *= i;
//     }
//         printf("the factorial of the no is %d\n",factorial);

//     return 0;
// }


#include<stdio.h>

int factorial(int n){
    if (n == 0)
   return 1;
   else{
    return n * factorial(n - 1);
   }
    
}
int main(){
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    printf("factorial = %d", factorial(num));
    return 0;
}
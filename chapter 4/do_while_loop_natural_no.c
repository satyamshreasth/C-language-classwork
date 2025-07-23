#include<stdio.h>

int main(){
    int n , i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<10);
    // while loop first check the condition and then execute the code
   // do while loop first execute the code and then check the condition
    return 0;
}
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    for (int i = 1; i < 11; i++) {
        n = i * 8;
        sum += n;
    }
    
    printf("Sum of numbers in the multiplication table of 8 from 8x1 to 8x10 is: %d\n", sum);

    return 0;
}
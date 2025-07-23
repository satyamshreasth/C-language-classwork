#include <stdio.h>
int main()
{
    int weight;
    printf("enter your weight in kg : ");
    scanf("%d", &weight);

    float height;
    printf("enter your height in meter : ");
    scanf("%f", &height);
    
    float bmi;
    printf("your weight is %d and your height is %.2f \n", weight, height);
    bmi = weight / (height * height);
    printf("your bmi value is %f", bmi);

    return 0;
}
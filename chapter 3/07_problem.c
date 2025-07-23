#include <stdio.h>

int main()
{
    float incomeslab;

    printf("enter your salary:");
    scanf("%f", &incomeslab);

    if (incomeslab < 2.5)
    {
        printf("\nNo tax");
    }
    else if (incomeslab <= 5.0 && incomeslab >= 2.5)
    {
        printf("\ntax is 5 %%");
    }
    else if (incomeslab <= 10.0 && incomeslab >= 5.0)
    {
        printf("\ntax is 20%%");
    }
    else if (incomeslab > 10)
    {
        printf("\ntax is 30%%");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char grade;
    int marks = 56;
    if (marks <= 100 && marks >= 90)
    {
        printf("grade = A");
    }
    else if (marks <= 90 &&marks >= 80)
    {
        printf("\ngrade = B");
    }
    else if (marks <= 80 &&marks >= 70)
    {
        printf("\ngrade = C");
    }
    else if (marks <= 70 &&marks >= 60)
    {
        printf("\ngrade = D");
    }
    else if (marks <= 60 &&marks >= 50)
    {
        printf("\ngrade = E");
    }
    else
        printf("\ngrade = F");
    return 0;
}
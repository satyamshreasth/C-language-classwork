#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("enter your marks1");
    scanf("%d", &marks1);

    printf("enter your marks2");
    scanf("%d", &marks2);

    printf("enter your marks3");
    scanf("%d", &marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("you are fail");
    }
   else if(marks1>33 || marks2>33 || marks3>33){
        printf("you are pass");
   }
    return 0;
}
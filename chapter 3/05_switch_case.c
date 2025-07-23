#include<stdio.h>

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("you entered %d", a);
        break;
        case 2:
        printf("\nyou entered 2");
        break;
        case 3:
        printf("\nyou entered 5");
        break;
    }
    return 0;
}
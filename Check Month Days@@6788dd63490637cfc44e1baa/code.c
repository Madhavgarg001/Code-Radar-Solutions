#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("January");
        break;
        case 2:
        printf("Febuary");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("Octobor");
        break;
        case 11:
        printf("Nevember");
        break;
        case 12:
        printf("December");
        break;
        default:
        printf("Invalid month");
    }
    return 0;
}
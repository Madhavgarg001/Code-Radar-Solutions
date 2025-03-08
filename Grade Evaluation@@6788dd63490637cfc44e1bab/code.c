#include<stdio.h>
int main(){
    char c;
    scanf("%d",&c);
    switch(c){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}
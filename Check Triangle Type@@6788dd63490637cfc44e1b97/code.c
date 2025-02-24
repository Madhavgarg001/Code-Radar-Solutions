#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b || a==c || b==c){
        printf("Isosceles");
    }
    return 0;
}
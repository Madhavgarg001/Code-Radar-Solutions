#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b!=c || a==c!=b || b==c!=a){
        printf("Isosceles");
    }
    return 0;
}
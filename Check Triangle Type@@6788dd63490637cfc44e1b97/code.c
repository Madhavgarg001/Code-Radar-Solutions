#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if(a==b && b==c){
        printf("Equilateral");
    }else if(a==b || a==c || b==c){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}
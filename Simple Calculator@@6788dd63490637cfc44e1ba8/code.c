#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d %c", &a, &b, &c);
    switch(c){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("error");
        }else{
            printf("%d",a/b)
        }
        break;
        default:
        printf("error");
    }
    return 0;
}
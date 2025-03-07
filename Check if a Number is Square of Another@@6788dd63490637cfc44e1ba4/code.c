#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b*b){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a>0 && b<0)){
        printf("True");
    }else if(b>0 && a<0){
        printf("False");
    }else{
        printf("False");
    }
    return 0;
}
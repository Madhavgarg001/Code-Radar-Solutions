#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int number =1;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    scnaf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            print("%d",j);
        }
        printf("\n");
    }
    return 0;
}
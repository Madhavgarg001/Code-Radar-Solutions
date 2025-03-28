#include<stdio.h>
void sortedarr();
int main(){
    sortedarr();
    return 0;
    
}
void sortedarr(){
        int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble sort(arr,n);
    printArrat(arr,n);
    return 0;
}
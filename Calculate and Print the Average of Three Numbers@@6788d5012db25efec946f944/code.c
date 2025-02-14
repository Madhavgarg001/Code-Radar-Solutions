#include<stdio.h>
int main(){
    int a,b,c;
    float average;
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3.0;
    printf("Average: %.2f\n",average);
    return 0;
}
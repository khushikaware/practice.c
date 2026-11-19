#include<stdio.h>
int main(){
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if(a%97==0)
        printf(" %d is divisible by 97 ",a);
    else
        printf(" %d is not divisible by 97 ",a);
    return 0;
}
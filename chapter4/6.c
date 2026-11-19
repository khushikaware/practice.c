#include <stdio.h>
int main(){
    int a;
    int sum=0;
    printf("enter number:");
    scanf("%d",&a);
    for (int i=1;i<11;i++){
        sum += a*i;
    }
    printf("sum of multiplication table is %d",sum);
    return 0;
}
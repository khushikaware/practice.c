#include <stdio.h>
int main(){
    int a;
    int product=1;
    printf("enter number:");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        product *= i;
    }
    printf("factorial of %d is %d",a,product);
    return 0;
}
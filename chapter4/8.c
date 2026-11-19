#include <stdio.h>
int main(){
    int a;
    int product=1;
    int i=1;
    printf("enter number:");
    scanf("%d",&a);
    while (i<=a){
        product *= i;
        i++;
    }
    printf("factorial of %d is %d",a,product);
    return 0;
}
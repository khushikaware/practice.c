#include<stdio.h>
int main(){
    float a;
    printf("Enter a temperature in Celsius: ");
    scanf("%f",&a);
    printf("The temperature in Fahrenheit is %f\n",a*9/5+32);
    return 0;
}
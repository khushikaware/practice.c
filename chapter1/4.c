#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter pricipal amount: ");
    scanf("%f",&a);
    printf("enter rate of interest: ");
    scanf("%f",&b);
    printf("enter time in years: ");
    scanf("%f",&c);
    printf("simple interest is %f\n",(a*b*c)/100);
    return 0;
}
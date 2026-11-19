#include <stdio.h>
int main(){
    float a;
    printf("enter your income in lakhs:");
    scanf("%f",&a);
    if(a<2.5){
        printf("tax is zero");
    }
    else if (5>a && a>2.5){
        printf("tax is %f",(a-2.5)*0.05);
    }
    else if (10>a && a>5)
    {
        printf("tax is %f",(a-5)*0.2+2.5*0.05);
    }
    else (a>10);{
        printf("tax is %f",(a-10)*0.3+5*0.2+2.5*0.05);
    }
    return 0;
}
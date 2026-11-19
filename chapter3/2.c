#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter marks in 3 subjects:");
    scanf("%f %f %f",&a,&b,&c);
    if (((a+b+c)*100/3)>=40 && a>=33 && b>=33 && c>=33)
       { printf("pass");}

     else if (a<33||b<33||c<33){
        printf("you are fail due to less marks in individual subject");
     }
    else
        printf("fail");
}
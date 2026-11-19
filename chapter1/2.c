#include<stdio.h>
int main(){
    float r,h;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("The radius of the circle is %f\n",r);
    printf("The area of the circle is %f\n",r*r*3.14);
    printf("The circumference of the circle is %f\n",2*r*3.14);
    printf("The height of the cylinder:\n ");
    scanf("%f",&h);
    printf("The volume of the cylinder is %f\n",r*r*3.14*h);
    return 0;
}
#include <stdio.h>
int main()
{
    int a=1;
    int sum = 0;
    do{
        sum += a;
        a++;
    } while (a<11);
    printf("sum of first 10 natural numbers is %d", sum);
    return 0;
}
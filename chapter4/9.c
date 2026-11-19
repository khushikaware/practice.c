#include <stdio.h>
int main(){
int a=4;
int prime=0;
for(int i=2; i<a; i++){
    if(a%i==0){
        prime=1;
    }
}
if(prime){
    printf("%d is not a prime number",a);
}
else{
    printf("%d is a prime number",a);
}
    return 0;
}

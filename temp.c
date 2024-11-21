#include<stdio.h>
void main(){
    float c,f;
    printf("The temperature in Celsius is:");
    scanf("%f",&c);

    f=(1.8*c)+32;
    printf("The temperature in Fahrehit is: %.2f",f);
}
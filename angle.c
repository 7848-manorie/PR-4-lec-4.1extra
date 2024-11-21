#include<stdio.h>
void main(){
    float a,b,c;
    printf("First angle is:");
    scanf("%f",&a);
    printf("Second angle is:");
    scanf("%f",&b);

    c=180-(a+b);

    printf("Third angle is:%.2f",c);
}
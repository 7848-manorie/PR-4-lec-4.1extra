#include<stdio.h>
void main(){
    float a=90,b,c;
    printf("First angle is: 90\n");
    printf("enter angle b:");
    scanf("%f",&b);
    c=180-(a+b);

    if(b>=0 && b<=90){
        printf("Third angle is:%.2f",c);
    }
    else{
         printf("invalid angle");
    }
}

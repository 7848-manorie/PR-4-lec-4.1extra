#include<stdio.h>
void main(){
    char ename[20];
    int bsalary;
    float HRA,MA,DA,TA,PF,PT=200,gross,nettotal;

    printf("enter the employee name:");
    scanf("%s",&ename);
    printf("enter the bsalary:");
    scanf("%d",&bsalary);

    HRA=bsalary*0.1;
    MA=bsalary*0.08;
    DA=bsalary*0.06;
    TA=bsalary*0.06;
    PF=bsalary*0.1;

    gross=bsalary+HRA+MA+DA+TA;
    nettotal=gross-PF-PT;

    printf("\nEmployee name is:%s",ename);
    printf("\nBase Salary is:%d",bsalary);
    printf("\nGross Salary is:%.2f",gross);
    printf("\nNettotal is:%.2f",nettotal);

}
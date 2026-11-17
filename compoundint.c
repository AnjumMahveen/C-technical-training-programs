#include<stdio.h>
#include<math.h>
int main(){
    float rate;
    printf("enter rate");//math.h is for calcualting function called power
    scanf("%f",&rate);
    float principal,time;
    printf("enter principal amount\n");
    scanf("%f",&principal);
    printf("enter time");
    scanf("%f",&time);
    float compound_interest = principal*pow((1+rate/100),time);
    printf("compound interest is:%f",compound_interest);
    return 0;

}
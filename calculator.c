#include<stdio.h>
int main(){
    float a,b;
    char opr;
    printf("enter a,b values");
    scanf("%f%f",&a,&b);
    printf("enter operation(+,-,*):");
    scanf(" %c", &opr);
    float res;
    switch(opr)
    {
        case '+' : 
                   res = a+b;
                   break;
        case '-' : 
                   res=a-b;
                   break;
        case '*' : 
                   res=a*b;
                   break;
        default : 
                   printf("invalid operator enter only(+,-,*)");
                   break;
    }
    printf("the result is:%.2f",res);
    return 0;

}
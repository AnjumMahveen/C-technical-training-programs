#include<stdio.h>
int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>18&&age<70){
        printf("eligible to vote");
    }else if(age>70){
        printf("your senior not possible");
    }else if(age<=18){
        printf("not eligible to  vote");
    }
    return 0;
}
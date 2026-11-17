#include<stdio.h>
int main(){
    float maths,physics,biology,social,hindi;
    printf("Enter maths marks:");
    scanf("%f",&maths);
    printf("enter physics marks:");
    scanf("%f",&physics);
    printf("enter biology marks:");
    scanf("%f",&biology);
    printf("enter social marks:");
    scanf("%f",&social);
    printf("enter hindi marks:");
    scanf("%f",&hindi);
    float percentage=(maths+physics+biology+social+hindi)/5;
    printf("the percentage of 5subjects is:%f",percentage);
    return 0;
}
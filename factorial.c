#include<stdio.h>
int main(){
    int n;
    printf("enter n value");
    scanf("%d",&n);
    int i=1,fact=1;
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
}
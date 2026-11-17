#include<stdio.h>
int main(){
    int n;
    printf("enter n value");
    scanf("%d",&n);
    int i=2,sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    printf("the sum of even numbers of %d is %d\n",n,i,sum);
    return 0;
}
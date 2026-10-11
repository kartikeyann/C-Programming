#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%3==0 || n%5==0){
        printf("number is divisible by 3 or 5");
    }
    else{
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}
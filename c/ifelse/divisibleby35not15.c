#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n%3==0 || n%5==0){
        if(n%15==0){
            printf("Sorry\n");
        }
        else{
            printf("the number is divisible by 3 and 5 and not 15");

        }
        
    }
    else{
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter the percentage:");
    scanf("%d", &a);
    if(a>90)
        printf("A grade\n"); 
    else if(a>80)
        printf("B grade\n");
    else
        printf("Fail");
    return 0;
}
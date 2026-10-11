#include<stdio.h>
int main(){
    int nn,a,n,r=0;
    printf("enter the numbre");
    scanf("%d",&n);
    nn=n;
    while (n>0){
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    printf("%d",r);
    if(nn==r){
        printf("palindrome");
    }
    else
        printf("not a palidrome");
    





}
#include<stdio.h>
int main(){
    int i=0,nn,a,n,r=0;
    printf("enter the numbre");
    scanf("%d",&n);
    nn=n;
    while (n>0){
        a=n%10;
        i++;
        n=n/10;
    }
    printf("no of the digits of %d is %d",nn,i);
    





}
#include<stdio.h>
int main(){
    char c;
    int a ,b;
    printf("A-addition\n B-Subtraction\n C-Multiplicatipon\n D-Division\n");
    printf("enter your choice");
    scanf("%c",&c);
    printf("enter the a ");
    scanf("%d",&a);
    printf("enter the b ");
    scanf("%d",&b);
    switch(c){
        case 'A':
         printf("%d+%d=%d",a,b,a+b);
         break;
        case 'B':
         printf("%d-%d=%d",a,b,a-b);
         break;
        case 'C':
         printf("%d*%d=%d",a,b,a*b);
         break;
        case 'D':
         if(b==0){
            printf("not with 0 lil bro");
         }
         else {
            printf("%d/%d=%d",a,b,a/b);
         }

          
         break;
        default: 
         printf("invalid charac");
    }

    
    
    





}
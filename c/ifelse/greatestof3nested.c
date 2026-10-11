#include<stdio.h>
int main(){
    int a;
    printf("enter the a:");
    scanf("%d",&a);
    int b;
    printf("enter the b:");
    scanf("%d",&b);
    int c;
    printf("enter the c:");
    scanf("%d",&c);
    if(a>b ){
        if(a>c)
        printf("%dis the greatest",a);
       else
        printf("%d is the greatest",c);
        
}
    if(b>c )
        printf("%d is the greatest",b);
    else
        printf("%d is the greatest",c);
    return 0;

}
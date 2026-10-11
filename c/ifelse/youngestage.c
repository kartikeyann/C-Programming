#include<stdio.h>
int main(){
    int a;
    printf("enter the age of ram:");
    scanf("%d",&a);
    int b;
    printf("enter the age of shyam:");
    scanf("%d",&b);
    int c;
    printf("enter the age of naam:");
    scanf("%d",&c);
    if(a<b ){ // b is greater
        if(a<c)
        printf("ram (%d) is the youngest",a);
       else
        printf("naam (%d) is the youngest",c);
        
}
    else if(b<c )
        printf("%d is the youngest",b);
    else
        printf("%d is the youngest",c);
    return 0;

}
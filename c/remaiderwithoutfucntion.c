#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("Enter the number divisor:");
    scanf("%d",&b);
    int c = a/b;
    int r= a- (b*c);
    printf("The remainder is: %d",r);
    return 0;
}
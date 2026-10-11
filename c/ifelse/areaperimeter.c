#include<stdio.h>
int main()
{ 
    int l,b;
    printf("Enter the length:");
    scanf("%d",&l);

    printf("Enter the breadth:");
    scanf("%d",&b);

    int area = l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        printf("Area is greater");

    }
    if(area==perimeter){
        printf("Equal");

    }
    if(area<perimeter){
        printf("perimeter is greater");
    }

    return 0;
}
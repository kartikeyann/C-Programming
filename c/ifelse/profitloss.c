#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("lets go profit");
    }
    if(sp==cp){
        printf("nothing");

    }
    if(cp>sp){
        printf("ohno loss");
    }
    return 0;
}
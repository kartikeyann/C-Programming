#include<stdio.h>
int main()
{
    int i;
    for (i=50;i<190;i++){
        if (i%2==0){
            continue;
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;

}
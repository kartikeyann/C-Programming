#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=25;i++){
        for (j=1;j<=10;j++){
            printf("%d * %d = %d\n ",i,j,i*j);
        }
    }
    return 0;

}
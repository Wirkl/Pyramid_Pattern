#include<stdio.h>
#define N 10

int main(){  
    int i=1, count, spaces;
    while (i<=N){
        spaces=N-i;
        while (spaces-->0) printf(" ");
        count=i-1;
        while (count<(2*i-1)) printf("%d", (++count%10));
        while (count>i) printf("%d", (--count%10));
        printf("\n");
        i++;
    }
    return 0;
}
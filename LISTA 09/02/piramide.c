#include<stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    j=2*n;
    for(; n>0; n--){
        for(i=1; i<n; i++){
            printf(" ");
        }
        for(i=0;2*n+i<=j; i++){
            printf("*");
        }
        printf("\n");
    }
}
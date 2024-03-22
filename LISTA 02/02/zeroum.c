#include <stdio.h>
int main(){

    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && a==c && b==c){
        
        printf("empate\n");

    } else if (a!=b && a!=c){

        printf("A\n");

    } else if (b!=c && b!=a){

        printf("B\n");

    } else printf("C\n");

    return 0;

}
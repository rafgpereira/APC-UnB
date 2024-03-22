#include <stdio.h>
int main(){

    int numero;
    scanf("%d", &numero);


    for(int a=0; a<=numero; a++){
        for (int b=1; b<=a; b++){
            printf("%02d ", a);
        }
        printf ("\n");
    }
    
    for (int i=0; i<=numero; i++){
        for(int j=1; j<=i; j++){
            printf("%02d ", j);
        }
        printf("\n");
    }
    
    return 0;
}
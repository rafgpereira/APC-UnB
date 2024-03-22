#include <stdio.h>
int main(){

    int linha, coluna;
    scanf("%d %d", &linha, &coluna);


    for(int a=0; a<linha; a++){
        for (int b=0; b<coluna; b++){
            printf("[%03d, %03d] ", a, b);
        }
        printf ("\n");
    }
}
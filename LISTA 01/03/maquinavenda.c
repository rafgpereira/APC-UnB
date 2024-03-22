#include <stdio.h>
int main(){

    int P;
    scanf("%d", &P);

    int V;
    scanf("%d", &V);

    // P é o preço do produto e V o valor que foi pago

    int M1;
    int M2;
    int M3;
    int M4;
    int M5;
    int M6;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;

    // foram declaradas todas as variáveis, em int pq o exercício só usa valores inteiros. M1 corresponde a moeda de 500 e M6 a moeda de 1. As var R foram criadas para facilitar o calculo:

    M1 = (V - P) / 500;
    
    printf("%d\n", M1);

    R1 = (V - P) - (M1 * 500);

    M2 = R1 / 100;
    
    printf("%d\n", M2);

    R2 = R1 - (M2 * 100);

    M3 = R2 / 50;
    
    printf("%d\n", M3);

    R3 = R2 - (M3 * 50);

    M4 = R3 / 10;
    
    printf("%d\n", M4);

    R4 = R3 - (M4 * 10);

    M5 = R4 / 5;
    
    printf("%d\n", M5);

    R5 = R4 - (M5 * 5);

    M6 = R5 / 1;
    printf("%d\n", M6);

    return 0;
};
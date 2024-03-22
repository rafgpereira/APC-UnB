#include <stdio.h>
int main(){

    int CC;
    scanf("%d", &CC);


    int A1;
    A1 = CC % 10;
    

    int A2;
    A2 = (CC % 100) / 10;
    

    int A3;
    A3 = (CC % 1000) / 100;
    

    int A4;
    A4 = (CC % 10000) / 1000;
    

    int A5;
    A5 = (CC % 100000) / 10000;
    

    int A6;
    A6 = (CC % 1000000) / 100000;
    
    int resto;
    resto = (A1*2 + A2*3 + A3*4 + A4*5 + A5*6 + A6*7) % 11;

    int DV;
    DV = 11 - resto;
    printf("%d\n", DV);

    // CC= conta corrente / A1, A2...= algarismos que vao de 1 a 6 / resto= resto da divisão dos algarismos multiplicados pelos seus por 11 / DV= digito verificador

    return 0;
};
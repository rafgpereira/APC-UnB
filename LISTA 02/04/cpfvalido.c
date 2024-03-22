#include <stdio.h>
int main(){

    unsigned long long int cpf;
    
    scanf("%llu", &cpf);

    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11;


    a1 = (cpf % 10);
    a2 = (cpf % 100) / 10;
    a3 = (cpf % 1000) / 100;
    a4 = (cpf % 10000) / 1000;
    a5 = (cpf % 100000) / 10000;
    a6 = (cpf % 1000000) / 100000;
    a7 = (cpf % 10000000) / 1000000;
    a8 = (cpf % 100000000) / 10000000;
    a9 = (cpf % 1000000000) / 100000000;
    a10 = (cpf % 10000000000) / 1000000000;
    a11 = (cpf % 100000000000) / 10000000000;


    //a1 é o dígito mais a direita, a11 o mais a esquerda.

    int resto1, resto2;
    

    resto1 = (a11*10 + a10*9 + a9*8 + a8*7 + a7*6 + a6*5 + a5*4 + a4*3 + a3*2)*10 % 11;
    if(resto1==10) resto1=0;
    
    resto2 = (a11*11 + a10*10 + a9*9 + a8*8 + a7*7 + a6*6 + a5*5 + a4*4 + a3*3 + a2*2)*10 % 11;
    if (resto2==10) resto2=0;


    if (resto1==a2 && resto2==a1){
        printf("valido\n");
    } else printf ("invalido\n");

    return 0;
}
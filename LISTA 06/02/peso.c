#include <stdio.h>
//A primeira função não é do tipo vois, logo, retorna um valor, 0 ou 1.
int validaPeso (double pesoKg ){
    if(pesoKg<0){
        return 0;
    } else{
        return 1;
    }
}
//As duas funções seguintes são do tipo void, ou seja, elas não retornam um valor, e para dar a saída é necessária a utilização de um printf.
void fazGrama ( double pesoKg ){
    //Nessa verificação do if, é buscado o return da função anterior para prosseguir com o código. 
    if(validaPeso(pesoKg)==1){
    pesoKg*=1000;
    printf("%.4lf\n", pesoKg);
    }
}

void fazTonelada ( double pesoKg){
    if(validaPeso(pesoKg)==1){
    pesoKg/=1000;
    printf("%.4lf\n", pesoKg );
    }
} 
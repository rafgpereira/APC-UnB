#include <stdio.h>
int main(){
    int quant, x=1000001, posicao;
    scanf("%d", &quant);
    int vet[quant];
    for(int a=0; a<quant; a++){
        scanf("%d", &vet[a]);
        if(vet[a]<x){
            x=vet[a];
            posicao=a;
        }
    }
    printf("%d\n", posicao);
    return 0;
}
#include <stdio.h>
int main(){
    int N, soma=0, palpite;
    scanf("%d", &N);
    int preco[N];

    for(int  i=0; i<N; i++){
        scanf("%d", &preco[i]);
        soma += preco[i];
    }

    scanf("%d", &palpite);

    if(soma==palpite){
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }
    return 0;
}
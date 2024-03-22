//O exercício coleta uma matriz quadrada de 0 e 1, e pede para retornar a coluna(começando em 1) que contem o maior número de 1. Caso não exista uma coluna que siga as exigências, imprime 0.
#include <stdio.h>
int main(void){
    int N, a=0, b=0, c=0;
    //Inicialmente é escaneado N, que representa o número de linhas e colunas da matriz, ja que é quadrada.
    scanf("%d", &N);
    int mapa[N][N];
    //Em seguida, fazem-se dois laços, um para ler as linhas(i) e outro para ler as colunas(j).
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &mapa[i][j]);
        } 
     
    }
    //Novamente outros dois laços são feitos, para perpassar por todos os elementos da matriz, entretando, agora J e I são trocados, para que sejam lidas as colunas (o laço anterior scaneava os numeros em linhas). Caso este elemento seja igual a 1, uma variável verificadora é incrementada.
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(mapa[j][i]==1){
                a++;
            }
        } 
        //Neste if, a maior coluna i é armazenada, utilizando uma variável auxiliar "b", para que no fim do ciclo de uma coluna, o a possa ser zerado para reiniciar a verificação da nova coluna. Por fim, a var C é utilizada apenas para chamar a coluna I e somá-la com 1, por a matriz começa na coluna 0, mas o exercício considera o início na coluna 1. No fim, C é a saída.
        if(b<a){
            b=a;
            c=i+1;
        }
        a=0;
     
    }    
    printf("%d\n", c);
    return 0;

}
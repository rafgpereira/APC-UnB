//O código recebe uma matriz de strings com N frases (começando em 1) cada frase ocupa a posição de uma linha.
#include <stdio.h>
#include <string.h>
int main(){
    int n, linha, coluna;
    scanf("%d\n", &n);
    char frases[n+1][1000], letra;
    int vet[n+1];
    //No primeiro for, são lidas as N frases através de um gets, para ler espaços. O vetor vet armazena o tamanho de cada frase (a quantidade de colunas).
    for(int i=1;i<=n; i++){
        gets(frases[i]);
        vet[i]=strlen(frases[i]);
    }
    //Em sequencia é coletada a posição inicial do cursor, e depois saõ lidas letras sucessivemente (j para descer uma linha e k para subir) até EOF.
    scanf("%d%d", &linha, &coluna);

    while(scanf(" %c", &letra)!=EOF){
        //O primeiro if trata o caso do J, descer uma linha no cursor. A condição linha<N é utilizada para que o cursor não desça caso ele ja esteja na última linha. Se isso for atendido, a var linha é incrementada.
        if(letra=='j'&&linha<n){
            linha++;    
        } 
        //Neste else if, é verifiado se a letra é K, subir a linha. A condição linha>1 é usada para verificar se o cursor já não está na primeira linha. Se isso for atendido, a var linha é subtraída. 
        else if (letra=='k'&&linha>1){
            linha--;   
        }
        //O If a seguir verifica se a coluna que o cursor está é maior que a quantidade de colunas daquela linha, se for, o cursor deve subir ou descer para a ultima coluna daquela linha, logo, no printf os termos que representam coluna são substituídos pela ultima coluna da frase (vet[linha]).
        if(vet[linha]<coluna){
            printf("%d %d %c\n", linha, vet[linha], frases[linha][vet[linha]-1]);
        } 
        //Este else ocorre nos demais casos, em que o cursor pode descer para a frase de cima ou de baixo sem preocupações, pois as frases próximas são do mesmo tamanho ou maiores que a posição do cursor.
        else{
            printf("%d %d %c\n", linha, coluna, frases[linha][coluna-1]);
        }
    }
    return 0;
}
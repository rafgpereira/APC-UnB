//Neste exercício são lidas duas matrizes de str com N e P linhas e no max 80 colunas. O código deve analisar se alguma palavra da segunda matriz existe na primeira.
#include <stdio.h>
int main(){
    int N, P, a, c=0, k;
    //São lidas as quantidades de linhas de cada matriz:
    scanf("%d%d", &N, &P);
    char palavras[N][80], palavras2[P][80];
    
    //Os dois laços a seguir fazem a leitura das matrizes.
    for(int i=0; i<N; i++){
        scanf("%s", palavras[i]);

    }
    for(int i=0; i<P; i++){
        scanf("%s", palavras2[i]);
    }

    //São feitos três laços: O primeiro percorre as linhas da primeira matriz. O segundo percorre as linhas da segunda matriz. O terceiro analisa cada coluna em cada linha nas duas matrizes, procurando por uma divergência. Quando os caracteres são diferentes, a var A é incrementada. Se no fim for 0, quer dizer que alguma string de uma matriz era igual a de outra matriz, e o codigo deve imprimir 1.
    for(int i=0; i<N; i++ ){
        for(int j=0; j<P; j++){
            a=0;
            //Este for e o primeiro if percorrem as strings até a última letra de uma delas, mas nao das duas, logo, outro if abaixo é necessário.
            for( k=0; palavras[i][k]!='\0'&& palavras2[j][k]!='\0'; k++ ){
                if(palavras[i][k]!=palavras2[j][k]){
                    a++;
                }  
            }
            //Este segundo if analisa o ultimo caracter (IK/JK) das strings, caso algum seja diferente de "/0" quer dizer que uma terminou antes da outra, logo são diferentes e A é incrementada. (EX: Sem esse if, o código considera come=comendo).
            if(palavras[i][k]!='\0' || palavras2[j][k]!='\0'){
                a++;
            }
            if(a==0){
                c=1;
            }
        }
    }
    printf("%d\n", c);

    return 0;
}
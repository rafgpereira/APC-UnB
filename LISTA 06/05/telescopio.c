#include <stdio.h>
//Este exemplo coleta dois valores de entrada, que são utilizados em uma equação astronômica e retorna outro valor.
int contarEstrelas(int qtd, int abertura){
    int fotons, visiveis=0;
    for(int i=0;i<qtd;i++){
        scanf("%d",&fotons);
        if(fotons*abertura>=40000000){
            visiveis++;
        }
    }
    return visiveis;
}
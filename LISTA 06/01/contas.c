#include <stdio.h>
//A função já coleta os valores de parcelas e operador; bastando a partir disso, terminar o código do programa.
//Esta função não é declarada no void, então ela retorna um valor.
int faz_conta_direito(int parcelas, char op){
    int valor, soma;
    scanf("%d", &soma);
    
    for(int i=1; i<parcelas; i++){
        scanf("%d", &valor);
        if(op=='-'){
            soma-=valor;
        }
        else if( op == '+'){
            soma=soma+valor;

        }
    }
    return soma;

}




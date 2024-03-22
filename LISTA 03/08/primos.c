#include <stdio.h>
int main(){
    
    int quantidade, numero;
    char resultado;

    scanf("%d", &quantidade);

    for (int a = 0; a<quantidade; a++){
        scanf("%d", &numero);
        resultado = 'S';
        for (; numero!=0; numero/=10 ){
            if(numero==1){
                resultado ='N';
                break;
            }
            for(int b = 2; b <= numero/2 ; b++) {
                if (numero % b == 0) {
                    resultado ='N';
                    break;
                }
            }
              
        }
        printf("%c\n", resultado);
    }

    return 0;
}




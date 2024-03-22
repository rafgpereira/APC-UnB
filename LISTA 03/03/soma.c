#include <stdio.h>
int main() {

    int quantidade;
    int numero;
    int resultado = 0;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        
        scanf("%d", &numero);

        if(numero <= 5000){
            
            resultado += numero;
        }

    }
    printf ("%d\n", resultado);
    return 0;
}
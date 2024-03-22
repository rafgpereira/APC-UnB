#include <stdio.h>
int main(){
    int i = 1;
    int numero, resultado = 0;
    
    
    while (i!=0){
        scanf("%d", &numero);
        if (numero <= 5242880 && numero % 2 == 0){
            resultado += numero;
        }
        if (numero==0){
            i=0;
        }
    }
    printf("%d\n", resultado);
    
    return 0;
}
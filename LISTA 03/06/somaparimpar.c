#include <stdio.h>
int main(){
    int i = 1;
    int numero, somap = 0, somai = 0;
    
    
    while (i!=0){
        scanf("%d", &numero);
        if ( numero % 2 == 0){
            somap += numero;
        } else if (numero % 2 != 0){
            somai +=numero;
        }
        if (numero==0){
            i=0;
        }
    }
    printf("%d %d\n", somap, somai);
    
    return 0;
}
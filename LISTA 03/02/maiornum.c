#include <stdio.h>
int main(){
    int n, x, y; 

    scanf("%d", &n);
    scanf("%d", &y);

    //scaneei y pois ele é o primeiro valor, e será utilizado como referência para comparar os demais. No for coloco i = 1 para scanear 1 vez a menos, ja que eu escaneio uma vez fora - isso é feito para nao ter que trabalhar com valores pré definidos.
    
    for(int i = 1; i < n; i++){

        scanf("%d", &x);
        if (x > y){
            y = x;
        }
    }
    printf ("%d\n", y);
    return 0;

}
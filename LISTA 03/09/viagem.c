#include <stdio.h>
int main(){
    int rest, nota, quant=0, a=0, dia=1;
    
    while (scanf("%d", &quant)!=EOF){
        int rest1, nota1=-1;
        while(a<quant){
            scanf("%d%d", &rest, &nota);
            a++;
            while ( a<quant&&nota==nota1&&rest<rest1){
                scanf("%d%d", &rest1, &nota1);
                a++;
            }
            while(a<quant&& nota1<nota){
                scanf("%d%d", &rest1, &nota1);
                a++;
                while(a<quant&&nota==nota1&&rest<rest1){
                    scanf("%d%d", &rest1, &nota1);
                    a++;
                }
            }
                
        }

        a=0;
        if(nota>nota1){
            printf("Dia %d\n%d\n\n", dia, rest);
        } else if (nota1>nota){
            printf("Dia %d\n%d\n\n", dia, rest1);
        } else if (rest<rest1){
            printf("Dia %d\n%d\n\n", dia, rest);
        } else{
            printf("Dia %d\n%d\n\n", dia, rest1);
        }
        dia++;
    }
    
    return 0;
}
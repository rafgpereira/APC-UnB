#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int vet1[N], vet2[N], operador[N], resultado[N];

    for(int i=0; i<N; i++){
        scanf("%d", &vet1[i]);
    }
    for(int i=0; i<N; i++){
        scanf("%d", &vet2[i]);
    }
    for(int i=0; i<N; i++){
        scanf("%d", &operador[i]);
        if(operador[i]==0){
            resultado[i]= vet1[i]+vet2[i];
            printf("%d ", resultado[i]);
        } else if(operador[i]==1){
            resultado[i]= vet1[i]-vet2[i];
            printf("%d ", resultado[i]);
        }else if(operador[i]==2){
            resultado[i]= vet1[i]*vet2[i];
            printf("%d ", resultado[i]);
        }else if(operador[i]==3){
            resultado[i]= vet1[i]/vet2[i];
            printf("%d ", resultado[i]);
        }
    }
    return 0;
}
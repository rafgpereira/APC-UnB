#include <stdio.h>
int main(){
    int N, x, pertence=0;
    scanf("%d", &N);
    int vet[N];

    for(int i=0; i<N; i++){
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);


    for(int i=0; i<N; i++){
        if(vet[i]==x){
           pertence++;
        }
    }
    if (pertence == 0){
        printf("nao pertence\n");
    } else{
        printf("pertence\n");
    }
    
    return 0;
}
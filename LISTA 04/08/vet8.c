#include <stdio.h>
int main(){
    int n, media, soma =0, a=0;
    scanf("%d", &n);
    int vet[n]; 

    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
        soma +=vet[i];
    }

    media = soma / n;

    for(int i=0; i<n; i++){
        if(vet[i]>media){
            printf("%d ", vet[i]);
            a++;
       
        }
    }
    if(a==0){
            printf("%d\n", a);
    }
    return 0; 
}
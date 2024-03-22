#include <stdio.h>
int main(){
    int n, a=0;
    scanf("%d", &n);
    int vet1[n], vet2[n];

    for(int i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }
    for (int i=0; i<n; i++){
        scanf("%d", &vet2[i]);
    }
    for(int i=0; i<n; i++){
        if(vet1[i]==vet2[i]){
            a++;
        }
    }
    
    if(a==n){
        printf("sim\n");
    }else {
        printf("nao\n");
    }
    
    return 0;

}
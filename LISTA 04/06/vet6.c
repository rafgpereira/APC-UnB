#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vet1[n], vet2[n], soma[n];

    for(int i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }
    for (int i=0; i<n; i++){
        scanf("%d", &vet2[i]);
    }
    for(int i=0; i<n; i++){
        soma[i] = vet1[i] + vet2[i];
        printf("%d ", soma[i]);
    }
    return 0;

}
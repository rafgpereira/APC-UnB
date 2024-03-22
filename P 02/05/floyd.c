#include <stdio.h>
int main(){

    int i = 0, qte = 1, num = 1, N;
    scanf("%d", &N);

    while(i < N){
        int j;
        for(j = 0; j < qte; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
        qte++;
        i++;
    }
    return 0;
}

#include <stdio.h>
int main(){

    int N;
    int i = 1;
    scanf ("%d", &N);

    while (i<=N){
        if(i%2==0){
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        } else if (i%2!=0){
            printf("THUMS THUMS THUMS\n");
        }
        i++;
    }
    
    return 0;

}
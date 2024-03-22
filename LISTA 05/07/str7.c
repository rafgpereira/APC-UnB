#include <stdio.h>
#include <ctype.h>
int main(){
    int N, valor,x=0, y=0, z=0;
    char palavra[42], palavramaiusc[42];

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%s", palavra);
        for(; palavra[x]!='\0'; x++){
            palavramaiusc[x]=toupper(palavra[x]);
            valor=palavramaiusc[x];
            if (valor>y){
                y=valor;
                z++;
            }
        }
        if(z==x){
            printf("%s: O\n", palavra);
        } else if(z!=x) {
            printf("%s: N\n", palavra);
        }
        x=0;
        y=0;
        z=0;
        
        
    }
    return 0;
    
}
#include <stdio.h>
int main(){
    int N, nota=0;
    scanf("%d", &N);
    char aluno[N], gabarito[N];

    scanf("%s", gabarito);
    
    scanf("%s", aluno);
    
    for(int i=0; i<N; i++){
        if (gabarito[i]==aluno[i]){
            nota++;
        }
    }
    printf("%d\n", nota);
    return 0;

}
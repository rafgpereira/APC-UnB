#include <stdio.h>
int main(){
    int f,l,i,j;
    scanf("%d%d",&f,&l);
    int vet[f][l];
    char n[4];
    for(i=0;i<f;i++){
        for(j=0;j<l;j++){
            vet[i][j]=0;
        }
    }
    while(scanf("%s",n)!=EOF){
        i=64+f-n[0];
        if(n[2]==0){
            j=n[1]-49;
        }
        else{
            j=(n[1]-48)*10+n[2]-49;
        }
        vet[i][j]=1;
    }
    printf(" ");
    for(i=1;i<=l;i++){
        printf(" %02d",i);
    }
    printf("\n");
    n[0]=64+f;
    for(i=0;i<f;i++){
        printf("%c",n[0]);
        for(j=0;j<l;j++){
            if(vet[i][j]==0){
                printf(" --");
            }
            else{
                printf(" XX");
            }
        }
        printf("\n");
        n[0]--;
    }
    return 0;
}
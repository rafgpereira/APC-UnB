#include <stdio.h>
int main(){
    int n,i,j,k=0,c;
    scanf("%d",&n);
    int vet[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&vet[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n&&k==0;j++){
            if(vet[i][j]==0){
                k=1;
            }
        }
        for(j=0;k==0&&j<n;j++){
            vet[i][j]=0;
        }
        k=0;
    }
    for(c=1;c==1;){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",vet[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        c=0;
        for(j=0;j<n;j++){
            for(i=0;i<n;i++){
                k+=vet[i][j];
            }
            for(i=n-1;i>=0;i--){
                if(k>0){
                    vet[i][j]=1;
                    k--;
                }
                else{
                    vet[i][j]=0;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",vet[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(i=0;i<n;i++){
            for(j=0;j<n&&k==0;j++){
                if(vet[i][j]==0){
                    k=1;
                }
            }
            for(j=0;k==0&&j<n;j++){
                vet[i][j]=0;
                c=1;
            }
            k=0;
        }
    }
    printf("\n");
    return 0;
}
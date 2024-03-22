#include <stdio.h>
int main(){
    char str[100];
    int n, j, x=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        for(j=0; str[j]!='\0'; j++){    
        }
        if(j>x){
            x=j;
        }
    }
    printf("%d\n", x);
    return 0;
}
#include <stdio.h>
int main(){
    char str[100];
    int x=0;
    while(scanf("%s", str) != EOF){
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]=='o'){
                x++;
            }
        }
    }
    printf("%d\n", x);
    return 0;
    
}
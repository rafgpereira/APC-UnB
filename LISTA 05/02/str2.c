#include <stdio.h>
int main(){
    char str[1000], str2[1000];
    int x, y, a=0;
    scanf("%s", str);
    for(x=0; str[x]!='\0'; x++){
    }
    for(y=x-1; y>=0; y--){
        str2[a]=str[y];
        a++;
    }
    str2[a]='\0';
    printf("%s", str2);
    return 0;
}
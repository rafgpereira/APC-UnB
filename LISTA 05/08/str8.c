#include <stdio.h>
int main(){
    int i,a=0,b=0,c=0,d=0;
    char str[10000],pal[10000],sub[10000],res[10000];
    gets(str);
    scanf("%s",pal);
    scanf("%s",sub);
    for(i=0;str[i]!='\0';i++){
        for(;str[i]!=' '&&str[i]!='\0';i++){
            if(pal[a]!=str[i]){
                b=1;
            }
            a++;
        }
        if(b==1){
            for(c=0;c<a;c++){
                res[d]=str[i-a+c];
                d++;
            }
        }
        else{
            for(c=0;sub[c]!='\0';c++){
                res[d]=sub[c];
                d++;
            }
        }
        res[d]=' ';
        d++;
        b=0;
        a=0;
    }
    res[d]='\0';
    printf("%s\n",res);
    return 0;
}
int encaixa(int a, int b){
    int i;
    for(i=1;b/i!=0;i*=10){
    }
    a=a%i;
    if(b==a){
        return 1;
    }
    else{
        return 0;
    }
}
int segmento(int a, int b){
    int i,j,c=0;
    if(a>b){
        for(i=1;b/i!=0;i*=10){
        }
        while(a>0){
            j=a%i;
            if(b==j){
                c=1;
            }
            a=a/10;
        }
    }
    else if(b>a){
        for(i=1;a/i!=0;i*=10){
        }
        while(b>0){
            j=b%i;
            if(a==j){
                c=1;
            }
            b=b/10;
        }
    }
    else{
        c=1;
    }
    return c;
}
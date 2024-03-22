#include <stdio.h>
int main(){
    int X, A, B, Y, C, D, Z, AB, CD;
    scanf("%d %d %d %d %d %d %d %d %d", &X,&A,&B,&Y,&C,&D,&Z,&AB,&CD);
    if((A+B) % 2 == X && (AB+CD) % 2 == Z) printf("A\n");
    else if ((A+B) % 2 != X && (AB+CD) % 2 == Z) printf ("B\n");
    else if ((C+D) % 2 == Y && (AB+CD) % 2 != Z) printf ("C\n");
    else printf ("D\n");
    return 0;
}
// reestruturação do código utilizando lógica booleana
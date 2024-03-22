#include <stdio.h>
#include <string.h>

struct tipoMusica {
    char nome[80];
    int ano;
};

struct tipoBanda {
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n) {
    int i, j;
    int achou = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < bandas[i].qtd; j++) {
            if (strcmp(bandas[i].musicas[j].nome, pesquisa) == 0) {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                achou = 1;
                break;
            }
        }
    }
    if (!achou) {
        printf("Musica nao cadastrada\n");
    }
}

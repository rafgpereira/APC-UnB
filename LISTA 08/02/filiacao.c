#include <stdio.h>

struct tipoFiliacao {
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
    struct tipoFiliacao filiacao;
    int i, j;

    // Inicializa os vetores com o valor nulo
    for (i = 0; i < 80; i++) {
        filiacao.nome[i] = '\0';
        filiacao.nomeMae[i] = '\0';
        filiacao.nomePai[i] = '\0';
    }

    // Separa a linha em três partes: nome, nomeMae e nomePai
    i = 0;
    j = 0;
    while (linha[i] != ',') {
        filiacao.nome[j] = linha[i];
        i++;
        j++;
    }
    i++;
    j = 0;
    while (linha[i] != ',') {
        filiacao.nomeMae[j] = linha[i];
        i++;
        j++;
    }
    i++;
    j = 0;
    while (linha[i] != '\0') {
        filiacao.nomePai[j] = linha[i];
        i++;
        j++;
    }

    return filiacao;
}

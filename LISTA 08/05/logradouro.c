#include <stdio.h>

struct tipoLogradouro {
  char tipo[80];
  char nome[80];
  char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]) {
  sprintf(linha, "%s;%s;%s", info.tipo, info.nome, info.complemento);
}

#include <stdio.h>

struct tipoData {
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa {
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento) {
    struct tipoPessoa pessoa;
    for (int i = 0; i < 80; i++) {
        pessoa.nome[i] = nome[i];
    }
    pessoa.dtNascimento.dia = dt_nascimento % 100;
    pessoa.dtNascimento.mes = (dt_nascimento / 100) % 100;
    pessoa.dtNascimento.ano = dt_nascimento / 10000;
    return pessoa;
}

#include <stdio.h>

int main() {
    int idade = 0;
    char nome[60] = "fabio";

    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Qual seu nome? ");
    scanf("%s", &nome);
    printf("teste de idade: %d\n", idade);
    printf("nome: %s\n", nome);

}
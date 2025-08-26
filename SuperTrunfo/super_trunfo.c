#include <stdio.h>

int main (){
    char estado, cod_carta, cidade;
    float area, pib;
    int populacao;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite dua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f\n", idade, altura);

    return 0;
}

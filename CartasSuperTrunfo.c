//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //return 0;
//}

#include <stdio.h>

#define MAX_NOME 50

struct Carta {
    char estado[3];
    char nome_da_cidade[MAX_NOME];
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("\nCadastro da primeira carta:\n");
    printf("Estado: ");
    scanf("%2s", carta1.estado);
    getchar();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta1.nome_da_cidade);
    getchar();

    printf("Codigo da cidade: ");
    scanf(" %3s", carta1.codigo);
    getchar();

    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    getchar();

    printf("Area: ");
    scanf("%f", &carta1.area);
    getchar();

    printf("PIB: ");
    scanf("%f", &carta1.pib);
    getchar();

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    getchar();

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf("%2s", carta2.estado);
    getchar();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta2.nome_da_cidade);
    getchar();

    printf("Codigo da cidade: ");
    scanf(" %3s", carta2.codigo);
    getchar();

    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    getchar();

    printf("Area: ");
    scanf("%f", &carta2.area);
    getchar();

    printf("PIB: ");
    scanf("%f", &carta2.pib);
    getchar();

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    getchar();

    // Cálculos adicionais
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta1.pib_per_capita = carta1.populacao > 0 ? (carta1.pib * 1e9) / carta1.populacao : 0;
    carta2.pib_per_capita = carta2.populacao > 0 ? (carta2.pib * 1e9) / carta2.populacao : 0;

    // Exibicao das cartas cadastradas
    printf("\nCartas Cadastradas:\n");

    printf("\nCarta 1\n");
    printf("Estado: %2s\n", carta1.estado);
    printf("Nome da cidade: %s\n", carta1.nome_da_cidade);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km² \n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f$ reais\n", carta1.pib_per_capita);

    printf("\nCarta 2\n");
    printf("Estado: %2s\n", carta2.estado);
    printf("Nome da cidade: %s\n", carta2.nome_da_cidade);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km² \n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f$ reais\n", carta2.pib_per_capita);

    int continuar = 1;
    while (continuar) {
        int atributo1, atributo2;

        printf("\nComparacao entre %s e %s\n", carta1.nome_da_cidade, carta2.nome_da_cidade);

        printf("\nEscolha o primeiro atributo (ou 0 para sair):\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n0 - Sair\nOpcao: ");
        scanf("%d", &atributo1);

        if (atributo1 == 0) {
            continuar = 0;
            break;
        }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("\nOpcao invalida. Escolha um atributo diferente do primeiro.\n");
        printf("Opcao: ");
        scanf("%d", &atributo2);
    }

    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    switch (atributo1) {
        case 1: valor1_c1 = carta1.populacao; valor1_c2 = carta2.populacao; break;
        case 2: valor1_c1 = carta1.area; valor1_c2 = carta2.area; break;
        case 3: valor1_c1 = carta1.pib; valor1_c2 = carta2.pib; break;
        case 4: valor1_c1 = carta1.pontos_turisticos; valor1_c2 = carta2.pontos_turisticos; break;
        case 5: valor1_c1 = carta1.densidade_populacional; valor1_c2 = carta2.densidade_populacional; break;
        default: printf("Atributo invalido.\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_c1 = carta1.populacao; valor2_c2 = carta2.populacao; break;
        case 2: valor2_c1 = carta1.area; valor2_c2 = carta2.area; break;
        case 3: valor2_c1 = carta1.pib; valor2_c2 = carta2.pib; break;
        case 4: valor2_c1 = carta1.pontos_turisticos; valor2_c2 = carta2.pontos_turisticos; break;
        case 5: valor2_c1 = carta1.densidade_populacional; valor2_c2 = carta2.densidade_populacional; break;
        default: printf("Atributo invalido.\n"); return 1;
    }

    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\n%s - Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", carta1.nome_da_cidade, valor1_c1, valor2_c1, soma_c1);
    printf("%s - Atributo 1: %.2f, Atributo 2: %.2f, Soma: %.2f\n", carta2.nome_da_cidade, valor1_c2, valor2_c2, soma_c2);

    if (soma_c1 > soma_c2) {
        printf("\nResultado: %s venceu!\n", carta1.nome_da_cidade);
    } else if (soma_c2 > soma_c1) {
        printf("\nResultado: %s venceu!\n", carta2.nome_da_cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}}

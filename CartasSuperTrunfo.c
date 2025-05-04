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
    char codigo[4];  // Código da cidade (string curta de até 3 caracteres + terminador '\0')
    unsigned long int populacao;   // Número de habitantes
    float area;      // Área da cidade
    float pib;       // Produto Interno Bruto (PIB)
    int pontos_turisticos;  // Número de pontos turísticos
    float densidade_populacional;
    float pib_per_capita;
    float super_poder; // Soma de todos os atributos da carta
};

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Cadastro da primeira carta
    printf("\nCadastro da primeira carta:\n");

    printf("Estado: ");
    scanf("%2s", carta1.estado);
    getchar();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta1.nome_da_cidade); // O formato %49[^\n] é um especificador especial do scanf() para ler strings q contêm espaços
    getchar();

    printf("Código da cidade: ");
    scanf(" %3s", carta1.codigo);  // O espaço antes de %3s evita problemas com buffer
    getchar();

    printf("População: ");
    scanf("%lu", &carta1.populacao);
    getchar();  // Limpa o '\n' deixado pelo scanf

    printf("Área: ");
    scanf("%f", &carta1.area);
    getchar();  // Limpa o buffer

    printf("PIB: ");
    scanf("%f", &carta1.pib);
    getchar();  // Limpa o buffer

    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    getchar();  // Limpa o buffer

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Estado: ");
    scanf("%2s", carta2.estado);
    getchar();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", carta2.nome_da_cidade);
    getchar();

    printf("Código da cidade: ");
    scanf(" %3s", carta2.codigo);
    getchar();

    printf("População: ");
    scanf("%lu", &carta2.populacao);
    getchar();

    printf("Área: ");
    scanf("%f", &carta2.area);
    getchar();

    printf("PIB: ");
    scanf("%f", &carta2.pib);
    getchar();

    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    getchar();

    // Calculo de atributos

    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.populacao > 0 ? (carta1.pib * 1e9) / carta1.populacao : 0;
    carta2.pib_per_capita = carta2.populacao > 0 ? (carta2.pib * 1e9) / carta2.populacao : 0;

    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pib_per_capita + (1.0 /(carta1.densidade_populacional + 1));
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pib_per_capita + (1.0 /(carta2.densidade_populacional + 1));

    // Exibição de cartas cadastradas
    printf("\nCartas Cadastradas:\n");

    printf("\nCarta 1\n");
    printf("Estado: %2s\n", carta1.estado);
    printf("Nome da cidade: %s\n", carta1.nome_da_cidade);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km² \n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f$ reais\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);


    printf("\nCarta 2\n");
    printf("Estado: %2s\n", carta2.estado);
    printf("Nome da cidade: %s\n", carta2.nome_da_cidade);
    printf("Código: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km² \n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f$ reais\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    do{ // Menu comparação

        printf("\nEscolha o atributo para comprarar:\n");
        printf("1 - População\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos túristicos\n");
        printf("5 - Densidade demográfica\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);
    
        printf("\nComparando %s e %s...\n\n", carta1.nome_da_cidade, carta2.nome_da_cidade);
    
        switch (escolha) {
            case 1: // População
                printf("População: \n%s: %lu\n%s: %lu\n", carta1.nome_da_cidade, carta1.populacao, carta2.nome_da_cidade, carta2.populacao);
                if (carta1.populacao > carta2.populacao) {
                    printf("Resultado: %s venceu!\n", carta1.nome_da_cidade);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("Resultado: %s venceu!\n", carta2.nome_da_cidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            
            case 2: // Área
                printf("Area: \n%s: %.2f km²\n%s: %.2f km²\n", carta1.nome_da_cidade, carta1.area, carta2.nome_da_cidade, carta2.area);
                if (carta1.area > carta2.area) {
                    printf("Resultado: %s venceu!\n", carta1.nome_da_cidade);
                } else if (carta2.area > carta1.area) {
                    printf("Resultado: %s venceu!\n", carta2.nome_da_cidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            
            case 3: // PIB
                printf("PIB: \n%s: %.2f bilhões\n%s: %.2f bilhões\n", carta1.nome_da_cidade, carta1.pib, carta2.nome_da_cidade, carta2.pib);
                if (carta1.pib > carta2.pib) {
                    printf("Resultado: %s venceu!\n", carta1.nome_da_cidade);
                } else if (carta2.pib > carta1.pib) {
                        printf("Resultado: %s venceu!\n", carta2.nome_da_cidade);
                } else {
                        printf("Resultado: Empate!\n");
                }
                break;
            
            case 4: // Pontos turísticos
                printf("Pontos Turísticos: \n%s: %d\n%s: %d\n", carta1.nome_da_cidade, carta1.pontos_turisticos, carta2.nome_da_cidade, carta2.pontos_turisticos);
                if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                    printf("Resultado: %s venceu!\n", carta1.nome_da_cidade);
                } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                    printf("Resultado: %s venceu!\n", carta2.nome_da_cidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            
            case 5: // Densidade demográfica
                printf("Densidade demográfica: \n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", carta1.nome_da_cidade, carta1.densidade_populacional, carta2.nome_da_cidade, carta2.densidade_populacional);
                if (carta1.densidade_populacional < carta2.densidade_populacional) {
                    printf("Resultado: %s venceu!\n", carta1.nome_da_cidade);
                } else if (carta2.densidade_populacional < carta1.densidade_populacional){
                    printf("Resultado: %s venceu!\n", carta2.nome_da_cidade);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 0: 
                printf("Encerrando o jogo obrigado por jogar!\n");
                break;
            
            default:
                printf("Opção inválida!\n");
                break;
            }
    } while (escolha != 0);

    return 0;
}
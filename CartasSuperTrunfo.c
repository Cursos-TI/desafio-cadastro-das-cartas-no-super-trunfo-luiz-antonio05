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

struct Carta {
    char codigo[4];  // Código da cidade (string curta de até 3 caracteres + terminador '\0')
    int populacao;   // Número de habitantes
    float area;      // Área da cidade
    float pib;       // Produto Interno Bruto (PIB)
    int pontos_turisticos;  // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("\nCadastro da primeira carta:\n");

    printf("Código da cidade: ");
    scanf(" %3s", carta1.codigo);  // O espaço antes de %3s evita problemas com buffer
    getchar();
    
    printf("População: ");
    scanf("%d", &carta1.populacao);
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

    printf("Código da cidade: ");
    scanf(" %3s", carta2.codigo);
    getchar();
    
    printf("População: ");
    scanf("%d", &carta2.populacao);
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

    // Exibição de cartas cadastradas
    printf("\nCartas Cadastradas:\n");

    printf("\nCarta 1\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}

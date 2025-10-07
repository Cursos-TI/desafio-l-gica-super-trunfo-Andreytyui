#include <stdio.h>

int main() {
    char estado;
    char codigo[4]; // até 3 caracteres + '\0'
    char cidade[30];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Carta 1:\n");

    // Validação do estado
    do {
        printf("Digite o Estado (A - H): ");
        scanf(" %c", &estado);

        if (estado < 'A' || estado > 'H') {
            printf("O estado '%c' é inválido. Tente novamente.\n", estado);
        }
    } while (estado < 'A' || estado > 'H');

    // Código da carta
    printf("Digite o código da carta: ");
    scanf(" %3s", codigo);

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade); // permite nomes com espaço

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontos_turisticos);

        //Realizar o calculo da densidade populacional e Pib per capita da carta 1.
// Deverá ser calculado dessa forma: Densidade populacional: população/Área
//                                   Pib per capita: PIB/População

    float densidade_populacional = populacao/area;
float per_capita = pib/populacao;



    // Exibe os dados para conferência
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("PIB per capita: %.2f\n",per_capita);



    char estado2;
    char codigo2[4]; // até 3 caracteres + '\0'
    char cidade2[30];
    float populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n Carta 2:");

    // Validação do estado
    do {
        printf("\n Digite o Estado (A - H): ");
        scanf(" %c", &estado2);

        if (estado2 < 'A' || estado2 > 'H') {
            printf("O estado '%c' é inválido. Tente novamente.\n", estado2);
        }
    } while (estado2 < 'A' || estado2 > 'H');

    // Código da carta
    printf("Digite o código da carta: ");
    scanf(" %3s", codigo2);

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // permite nomes com espaço

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &pontos_turisticos2);

         //Realizar o calculo da densidade populacional e Pib per capita da carta 2.
// Deverá ser calculado dessa forma: Densidade populacional: população/Área
//                                   Pib per capita: PIB/População

    float densidade_populacional2 = populacao2/area2;
float per_capita2 = pib2/populacao2;



    // Exibe os dados para conferência
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
     printf("PIB per capita: %.2f\n",per_capita2);

     
    // ===== COMPARAÇÃO ENTRE AS CARTAS =====
    // Escolha do atributo: PIB per capita
    printf("\n=== Comparação de cartas (Atributo: per capita) ===\n");
    printf("Carta 1 - %s (%c): %.2f\n", cidade, estado,per_capita);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2,per_capita2);

    if (per_capita > per_capita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (per_capita2 > per_capita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }





}

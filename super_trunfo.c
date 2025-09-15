#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração das variaveis para primeira carta
    char Estado1[20];
    char Codigo1[4]; 
    char Cidade1[20];
    int População1;
    int Ponto_Turistico1;
    float Area1;
    float Pib1;
    //Declar duas novas variaveis - nivel aventureiro;
    float Densidade_Populacional1;
    float PIB_per_capita1;

    //Declarando nova variavel - nivel mestre
    float Super_poder1;

    // Declaração das variaveis para segunda carta

    char Estado2[20];
    char Codigo2[4]; 
    char Cidade2[20];
    int População2;
    int Ponto_Turistico2;
    float Area2;
    float Pib2;
    // Declarar duas novas variaveis - nivel aventureiro;
    float Densidade_Populacional2;
    float  PIB_per_capita2;

    //Declarando nova variavel - nivel mestre
    float Super_poder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Cadastro da primeira carta

    printf("\n Cadastro da Primeira Carta\n");

    printf("Digite o estado:");
    scanf("%s", Estado1);

    printf("Digite o código da carta: (ex: A01): ");
    scanf("%s",Codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a população: ");
    scanf("%d", &População1);

    printf("Digite a área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &Pib1);

    printf("Digite o ponto turístico: ");
    scanf("%d", &Ponto_Turistico1);

    // Cálculo  das novas variaveis nivel aventureiro;
    Densidade_Populacional1 = (float)População1 / Area1;
    PIB_per_capita1 = Pib1 / População1;
    Super_poder1 = (float)(População1 + Area1 + Pib1 + PIB_per_capita1 + Ponto_Turistico1 - Densidade_Populacional1);

    // Cadastro da segunda carta

    printf(" \n Cadastro da Segunda Carta\n");

    printf("Digite o estado: ");
    scanf("%s", Estado2);

    printf("Digite o código da carta: (ex: A02) ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a população: ");
    scanf("%d", &População2);

    printf("Digite a área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &Pib2);

    printf("Digite o ponto turístico: ");
    scanf("%d", &Ponto_Turistico2);

    // Cálculo  das novas variaveis nivel aventureiro;
    Densidade_Populacional2 = (float)População2 / Area2;
    PIB_per_capita2 = Pib2 / População2;
    Super_poder2 = (float)(População2 + Area2 + Pib2 + PIB_per_capita2 + Ponto_Turistico2 - Densidade_Populacional2);

    //Exibição das informações da primeira carta
    printf("\n CARTA 1\n");
    printf("Estado: %s\n" , Estado1);
    printf("Código: %s\n" , Codigo1);
    printf("Cidade: %s\n" , Cidade1);
    printf("População: %d\n" , População1);
    printf("Área: %.2f Km\n" , Area1);
    printf("PIB: %.2f milhões\n" , Pib1);
    printf("Ponto Turístico: %d\n", Ponto_Turistico1);
    //Exibição do resultado nivel aventureiro;
    printf("Densidade Populacional: %.2f (hab/km)\n",Densidade_Populacional1);
    printf("Pib per capita: R$ %.2f\n",PIB_per_capita1);
    printf("O Super Poder é: %.2f\n", Super_poder1);

    //Exibição das informações da segunda carta
    printf("\n CARTA 2\n");
    printf("Estado: %s\n" , Estado2);
    printf("Código: %s\n" , Codigo2);
    printf("Cidade: %s\n" , Cidade2);
    printf("População: %d\n" , População2),
    printf("Área: %.2f Km\n", Area2);
    printf("PIB: %.2f milhões\n" , Pib2);
    printf("Ponto Turístico: %d\n", Ponto_Turistico2);
    //Exibição do resultado nivel aventureiro;
    printf("Densidade Populacional: %.2f (hab/km)\n",Densidade_Populacional2);
    printf("Pib per capita: R$ %.2f\n",PIB_per_capita2);
    printf("O Super Poder é: %.2f\n\n", Super_poder2);

 
    //Comparação das duas cartas;

    int resultado;
    resultado = Super_poder1 > Super_poder2;

    printf("Se %s for maior que %s O resulatdo é 1 se for menor é 0, Resultado: %d\n\n", Estado1,Estado2,resultado);

    printf("População da cidade: %d\n", (População1) > (População2));
    printf("Área: %d\n", (Area1) > (Area2));
    printf("O PIB: %d\n", (Pib1) > (Pib2));
    printf("Pontos Turísticos: %d\n", (Ponto_Turistico1) > (Ponto_Turistico2));
    printf("A Densidade Populacional: %d\n", (Densidade_Populacional1) > (Densidade_Populacional2));
    printf("O PIB per capita: %d\n", (PIB_per_capita1) > (PIB_per_capita2));
    printf("O super poder é: %d\n", (Super_poder1) > (Super_poder2));

    return 0;
}
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

    // Declaração das variaveis para segunda carta

    char Estado2[20];
    char Codigo2[4]; 
    char Cidade2[20];
    int População2;
    int Ponto_Turistico2;
    float Area2;
    float Pib2;
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

    //Exibição das informações da primeira carta
    printf("\n CARTA 1\n");
    printf("Estado: %s\n" , Estado1);
    printf("Código: %s\n" , Codigo1);
    printf("Cidade: %s\n" , Cidade1);
    printf("População: %d\n" , População1);
    printf("Área: %.2f Km\n" , Area1);
    printf("PIB: %.2f milhões\n" , Pib1);
    printf("Ponto Turístico: %d\n", Ponto_Turistico1);
    //Exibição das informações da segunda carta
    printf("\n CARTA 2\n");
    printf("Estado: %s\n" , Estado2);
    printf("Código: %s\n" , Codigo2);
    printf("Cidade: %s\n" , Cidade2);
    printf("População: %d\n" , População2),
    printf("Área: %.2f Km\n", Area2);
    printf("PIB: %.2f milhões\n" , Pib2);
    printf("Ponto Turístico: %d\n", Ponto_Turistico2);

 




    return 0;
}

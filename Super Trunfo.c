#include<stdio.h>
        //Primeira carta!

 int main()
{
    char estado[3], cidade[30];
    int populacao,Codigo_da_carta, pontos_t;
    float area, PIB;

    printf("\nPreencha os dados a seguir para a escolha de sua primeira carta !\n");

    printf("Digite a sigla do estado: \n");
    scanf(" %s", &estado);

    printf("Digite o codigo da carta,  01 ou 02: \n");
    scanf(" %d", &Codigo_da_carta);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade);

    printf("Qual o numero de habitantes da cidade? \n");
    scanf(" %d", &populacao);

    printf("Quantos pontos turisticos a cidade possui? \n");
    scanf(" %d", &pontos_t);

    printf("Qual a área da cidade em km²? \n");
    scanf(" %f", &area);

    printf("Qual o PIB da cidade (em milhões) \n");
    scanf(" %f",&PIB);

    printf("\n--- Dados da carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %d\n", Codigo_da_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontos_t);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", PIB);

    //Segunda carta

      char estado2[3], cidade2[30];
    int populacao2, Codigo2, pontos_t2;
    float area2, PIB2;

    printf("\nPreencha os dados da SEGUNDA carta!\n");

    printf("Digite a sigla do estado:\n ");
    scanf(" %s", &estado2);

    printf("Digite o código da carta 01 ou 02:\n ");
    scanf(" %d", &Codigo2);

    printf("Qual o nome da cidade? \n");
    scanf(" %s", &cidade2);

    printf("Qual o número de habitantes da cidade? \n");
    scanf(" %d", &populacao2);

    printf("Quantos pontos turísticos a cidade possui? \n");
    scanf(" %d", &pontos_t2);

    printf("Qual a área da cidade em km²? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB da cidade (em milhões)? \n");
    scanf(" %f", &PIB2);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", Codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_t2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", PIB2);

    return 0;
}
#include <stdio.h>  

int main() {

    //lista de váriaveis
    char estado1, estado2; 
    char nomecidade1[50],  nomecidade2[50];
    char codigocarta1[4], codigocarta2[4];
    int populacao1, populacao2, turisticos1, turisticos2;
    float pib1, pib2, km1, km2;


    printf("Comece preenchendo as cartas!\n"); //boas vindas


    //preenchendo carta 1
    printf("\n\n     Carta 1: \n\n");
    printf("Comece digitando o estado(A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da área em KM²: ");
    scanf("%f", &km1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turisticos1);


    //preenchendo carta 2
   printf("\n\n     Carta 2:\n\n");
    printf("Comece digitando o estado(A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área em KM²: ");
    scanf("%f", &km2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turisticos2);
    printf("\n\n");

    //exibindo a carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1); 
    printf("Área: %.2f km²\n", km1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("\n");

    //exibindo a carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2); 
    printf("Área: %.2f km²\n", km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("\n\n");

    printf("Suas cartas estão prontas!\n\n");    //Finalizado
    return 0;

    

}

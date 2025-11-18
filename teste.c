#include <stdio.h>
#include <stdlib.h> 

int main() {
//  dados da primeira carta.
char estado;
char nome[20];
char codigoCarta[3];
int carta = 1;
int populacao = 1;
int nPontosTuristicos = 1;
float area = 0;
float pib = 0;

//dados da segunda carta.
char estado2;
char nome2[20];
char codigoCarta2[3];
int carta2, populacao2, nPontosTuristicos2;
float area2, pib2;

printf("\nSuper Trunfo\n");

// solicitar os dados da primeira carta.
printf("digite os dados da primeira carta conforme o solicitado\n");

printf("estado:\n");
scanf("%s", &estado);

printf("codigo da carta:\n");
scanf("%s", &codigoCarta);

printf("nome da cidade:\n");
scanf("%s", &nome);

printf("populacao de habitantes da cidade:\n");
scanf("%d", &populacao);

printf("area da cidade em km²:\n");
scanf("%f", &area);

printf("PIB da cidade:\n");
scanf("%f", &pib);

printf("numero de pontos turisticos:\n");
scanf("%d", &nPontosTuristicos);

//solicitar os dados da segunda carta.
printf("digite os dados da segunda carta conforme o solicitado\n");
carta2 = 2;
printf("estado:\n");
scanf("%s", &estado2);

printf("codigo da carta:\n");
scanf("%s", &codigoCarta2);

printf("nome da cidade:\n");
scanf("%s", &nome2);

printf("populacao de habitantes da cidade:\n");
scanf("%d", &populacao2);

printf("area da cidade em km²:\n");
scanf("%f", &area2);

printf("PIB da cidade:\n");
scanf("%f", &pib2);

printf("numero de pontos turisticos:\n");
scanf("%d", &nPontosTuristicos2);

// mostras os dados da primeira carta.
printf(" suas cartas sao:\n");

printf("Carta: %d\n", &carta);
printf("Estado: %s\n", &estado);
printf("Codigo da carta: %s\n", &codigoCarta);
printf("Nome da cidade: %s\n", &nome);
printf("Populacao de habitantes da cidade: %.2f\n", &populacao);
printf("Area da cidade em km²: %.2f\n", &area);
printf("PIB da cidade: %.2f\n", &pib);
printf("Numero de pontos turisticos: %d\n\n", &nPontosTuristicos);

// mostras os dados da segunda carta.

printf("Carta: %d\n", &carta2);
printf("Estado: %s\n", &estado2);
printf("Codigo da carta: %s\n", &codigoCarta2);
printf("Nome da cidade: %s\n", &nome2);
printf("Populacao de habitantes da cidade: %.2f\n", &populacao2);
printf("Area da cidade em km²: %.2f\n", &area2);
printf("PIB da cidade: %.2f\n", &pib2);
printf("Numero de pontos turisticos: %d\n\n", &nPontosTuristicos2);

printf("numero de pontos turisticos:\n");
scanf("%d", &nPontosTuristicos2);
   
    return 0;
}

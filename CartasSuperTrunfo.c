#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
 char nome[50];
 int codigo;
 int populacao;
 int area;
 int pib; 
 int pontoturistico;  

printf("cidade: \n", nome);
scanf(" %s", &nome);

printf(" codigo: \n", codigo);
scanf(" %d", &codigo);


printf("populaçao: \n", populacao);
scanf(" %d", &populacao);

printf("area: \n", area);
scanf(" %d", &area);

printf("pib: \n ", pib);
scanf(" %d", &pib);

printf("ponto turistico:\n",  pontoturistico);
scanf(" %d", &pontoturistico);

double densidadepopulacional =(double) populacao  / area;
double pibpercapita =(double) pib / populacao;

;printf("cidade: %s\n", nome);
printf(" codigo: %d\n", codigo);
printf("populaçao: %d\n", populacao);
printf("area: %d\n", area);
printf("pib: %d\n ", pib);
printf("ponto turistico: %d\n",  pontoturistico);
printf("densidade populacional:%.2f\n", densidadepopulacional);
printf("pib per capita:%.2f\n", pibpercapita);
}

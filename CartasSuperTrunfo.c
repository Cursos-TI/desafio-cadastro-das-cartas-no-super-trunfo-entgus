#include <stdio.h>


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

  char nome2 [50];
 int codigo2;
 int populacao2;
 int area2;
  long long int  pib2; 
 int pontoturistico2;

printf("cidade: \n", nome2);
scanf(" %s", &nome2);

printf(" codigo: \n", codigo2);
scanf(" %d", &codigo2);


printf("populaçao: \n", populacao2);
scanf(" %d", &populacao2);

printf("area: \n", area2);
scanf(" %d", &area2);

printf("pib: \n ", pib2);
scanf(" %lld", &pib2);

printf("ponto turistico:\n",  pontoturistico2);
scanf(" %d", &pontoturistico2);

double densidadepopulacional =(double) populacao  / area;
double pibpercapita =( double ) pib / populacao;

double densidadepopulacional2 =(double) populacao2  / area2;
double pibpercapita2 =( double ) pib2 / populacao2;

;printf("cidade: %s\n", nome);
printf(" codigo: %d\n", codigo);
printf("populaçao: %d\n", populacao);
printf("area: %d\n", area);
printf("pib: %lld\n ", pib);
printf("ponto turistico: %d\n",  pontoturistico);
printf("densidade populacional:%.2f\n", densidadepopulacional);
printf("pib per capita:%.2f\n\n", pibpercapita);


printf("cidade: %s\n", nome2);
printf(" codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area: %d\n", area2);
printf("pib: %lld\n ", pib2);
printf("ponto turistico: %d\n",  pontoturistico2);
printf("densidade populacional:%.2f\n", densidadepopulacional2);
printf("pib per capita:%.2f\n", pibpercapita2);

printf("%s populaçao +%d\n", nome, populacao > populacao2);
printf("%s area +%d\n", nome, area > area2);
printf("%s pib +%d\n", nome, pib > pib2);
printf("%s pontos turisticos +%d\n", nome, pontoturistico > pontoturistico2);
printf("%s densidade populacional +%d\n", nome, densidadepopulacional < densidadepopulacional2);
printf("%s pib per capita +%d\n\n", nome, pibpercapita > pibpercapita2);

printf("%s populaçao + %d\n", nome2, populacao2 > populacao);
printf("%s area +%d\n", nome2, area2 > area);
printf("%s pib +%d\n", nome2, pib2 > pib);
printf("%s pontos turisticos +%d\n", nome2, pontoturistico2 > pontoturistico);
printf("%s densidade populacional +%d\n", nome2, densidadepopulacional2 < densidadepopulacional);
printf("%s pib per capita +%d\n", nome2, pibpercapita2 > pibpercapita);

}

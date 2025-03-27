#include <stdio.h>

int main(){
// informaões cadastrais das cidades brasileiras
    char carta = 'B';
         char carta2 = 'C';
    char codigo[] = "B01";
         char codigo2[] = "C01";
    int populacao1 = 2418000;
        int populacao2 = 2428678;
    int pturisticos = 20;
        int pturisticos2 = 18;
    float area1 = 693.8;
          float area2 = 313.8;
    double pib1 = 62.954000;
          double pib2 = 73.000300;
    char cidade[] = "Salvador";
          char cidade2[] = "Fortaleza";
//agora e fazer um printf e scanf para que seja coletado as informação de qual cidade escolhera

printf("*** Escolha uma dentre duas opcoes abaixo ***\n");
printf("Escolha A ou B\n");
scanf("%c");
      printf("Sua escolha e: %c\n", carta);
      printf("Sua cidade e: %s\n", cidade);
      printf("Codigo: %s\n", codigo);
      printf("Pontos turisticos da cidade: %d\n", pturisticos);
      printf("Area total: %.1f\n", area1);
      printf("Pib da cidade: %f\n", pib1);
// Usando operacao de divisão para calcular a densidade da cidade na variavel float
float divisao = populacao1 / area1;
// Usando operacao de divisão para calcular a pib da cidade na variavel doable
double divisao2 = populacao1 / pib1;
printf("a densidade de Salvador e: %.2f\n", divisao);
printf("O pib per capita de Salvador e: %.2f\n", divisao2);
// como no momento o programa so repete as informações ainda nao a sistema de escolha eu coloquei as infomações da outra cidade abaixo
float divisao3 = populacao2 / area2;
double divisao4 = populacao2 / pib2;
printf("*** Informações da outra carta: %c ***\n", carta2);
printf("cidade: %s\n", cidade2);
       printf("codigo: %s\n", codigo2);
       printf("a densidade de Fortaleza e: %.2f\n", divisao3);
       printf("O pib per capita de Fotaleza e: %.2f\n", divisao4);
       printf("Pontos turisticos da cidade: %d\n", pturisticos2);
       printf("Area total: %.1f\n", area2);
       printf("Pib da cidade: %f\n", pib2);



}

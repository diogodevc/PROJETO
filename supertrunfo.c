#include <stdio.h>

int main(){

// informações das cidades.
    char estado1 = 'B', estado2 = 'C';
    char codigo1[] = "B01", codigo2[] = "C01";
    char cidade1[] = "Salvador", cidade2[] = "Fortaleza";
    int populaçao1 = 2418000, populaçao2 = 2428678;
    float area1 = 693.8, area2 = 313.8;
    float pib1 = 210.70, pib2 = 730.00;

// usuario ira digitar as duas cidades e as informaçoes aparecem na tela
    printf("Digite sua cidade: ");
    scanf("%s %s", cidade1, cidade2);
    printf("Estado: %c, %c\nCidade: %s, %s\nCódigo: %s, %s\n", estado1, estado2, cidade1, cidade2, codigo1, codigo2);
    printf("Populção: %d, %d\nPib:%.2f, %.2f", populaçao1, populaçao2, area1, area2, pib1, pib2);





}
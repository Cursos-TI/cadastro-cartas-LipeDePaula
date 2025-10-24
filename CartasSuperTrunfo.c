#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {


  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração Das Variáveis Primeira Carta:
    
    int Populacao, PontoTuristicos, Codigo;
    char Estado;
    char NomeCidade[50];
    float Area, Pib;

    // Declaração Das Variáveis Segunda Carta:

    int populacao2, pontoturisticos2, codigo2;
    char estado2;
    char nomecidade2[50];
    float area2, pib2;



  // Área para entrada de dados

    // Cadastro Primeira Carta:

    printf("---Cadastre a primeira carta--- \n");

    printf("Estado, Digite uma letra de A a H: \n");
    scanf(" %c", &Estado);

    printf("Código da Carta, Digite um numero de 1 a 4: \n");
    scanf(" %d", &Codigo);

    printf("Nome da cidade: \n");
    scanf(" %s", NomeCidade);

    printf("Numero da população: \n");
    scanf(" %d", &Populacao);

    printf("Área: \n");
    scanf(" %f", &Area);

    printf("PIB: \n");
    scanf(" %f", &Pib);

    printf("Numeros de Pontos Turísticos: \n");
    scanf(" %d", &PontoTuristicos);


    // Cadastro Segunda Carta:

    printf("---Cadastre a segunda carta--- \n");

    printf("Estado, Digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Código da Carta, Digite um numero de 1 a 4: \n");
    scanf(" %d", &codigo2);

    printf("Nome da cidade: \n");
    scanf(" %s", nomecidade2);

    printf("Numero da população: \n");
    scanf(" %d", &populacao2);

    printf("Área: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Numeros de Pontos Turísticos: \n");
    scanf(" %d", &pontoturisticos2);


  // Área para exibição dos dados da cidade

  // Respostas da Primeira Carta:

    printf("---Primeira Carta---\n");

    printf("Letra Do Estado: %c \n", Estado);
    printf("Código da Carta: %d \n", Codigo);
    printf("Nome Da Cidade: %s \n", NomeCidade);
    printf("População: %d \n", Populacao);
    printf("Área(em km²): %.2f \n", Area);
    printf("PIB: %f \n", Pib);
    printf("Numeros de Pontos Turísticos: %d \n", PontoTuristicos);


 // Respostas da Segunda Carta:

    printf("---Segunda Carta---\n");

    printf("Letra Do Estado: %c \n", estado2);
    printf("Código da Carta: %d \n", codigo2);
    printf("Nome Da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área(em km²): %.2f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Numeros de Pontos Turísticos: %d \n", pontoturisticos2);

return 0;

} 

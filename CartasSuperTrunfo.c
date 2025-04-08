#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //variaveis(atributos) referentes a carta numero 1
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int numPopulacao1;
    float areaKM1;
    float PIB1;
    int pontosTuristicos1;
    
    //variaveis(atributos) referentes a carta numero 2
    char estado2;
    char codigoCarta2[05];
    char nomeCidade2[50];
    int numPopulacao2;
    float areaKM2;
    float PIB2;
    int pontosTuristicos2;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //entrada de dados referentes a carta de numero 1
    printf("DADOS DA CARTA 1 \n");
    printf("Informe o estado (ex:A,B,C,...):");
    scanf(" %c", &estado1);  
    printf("Informe o Codigo da carta (ex:01,02,...):");
    scanf("%s", codigoCarta1);
    printf("Informe o Nome da Cidade (ex:São Paulo):");
    scanf(" %[^\n]", nomeCidade1);  
    printf("Informe o numero de Habitantes:");
    scanf("%d", &numPopulacao1);
    printf("Informe a área da cidade(KM²):");
    scanf("%f", &areaKM1);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB1);
    printf("Informe o a quantidade de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

    //variaveis(com calculos) para os dados da carta 1
    float densidadePop1 = (float) numPopulacao1 / areaKM1; 
    float PIBperCapita1 = (float) PIB1 / numPopulacao1; 


    //entrada de dados referentes a carta de numero 2
    printf("DADOS DA CARTA 2 \n");
    printf("Informe o estado (ex:A,B,C,...):");
    scanf(" %c", &estado2);  
    printf("Informe o Codigo da carta (ex:01,02,...):");
    scanf("%s", codigoCarta2);
    printf("Informe o Nome da Cidade (ex:São Paulo):");
    scanf(" %[^\n]", nomeCidade2);  
    printf("Informe o numero de Habitantes:");
    scanf("%d", &numPopulacao2);
    printf("Informe a área da cidade(KM²):");
    scanf("%f", &areaKM2);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB2);
    printf("Informe o a quantidade de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);

    //variaveis(com calculos) para os dados da carta 2
    float densidadePop2 = (float) numPopulacao2 / areaKM2; 
    float PIBperCapita2 = (float) PIB2 / numPopulacao2; 



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //exibir dados referentes a carta de numero 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", numPopulacao1);
    printf("Área: %.2f km²\n", areaKM1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidadePop1);
    printf("PIB per capita: %.2f reais\n", PIBperCapita1);
    printf("-------------------------------------------");

    //exibir dados referentes a carta de numero 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", numPopulacao2);
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per capita: %.2f reais\n", PIBperCapita2);



   
    
    
    
   

    return 0;
}

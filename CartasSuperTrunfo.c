#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //variaveis(atributos) referentes a carta numero 1 e numero 2
    char estado1[3], estado2[3];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[50], nomeCidade2[50];
    int numPopulacao1, numPopulacao2;
    float areaKM1, areaKM2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;

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
    scanf("%lu", &numPopulacao1);  // Corrigido para %lu (unsigned long int)
    printf("Informe a área da cidade(KM²):");
    scanf("%f", &areaKM1);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB1);
    printf("Informe o a quantidade de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

    //variaveis(com calculos) para os dados da carta 1
    float densidadePop1 = (float) numPopulacao1 / areaKM1; 
    float PIBperCapita1 = (float) PIB1 / numPopulacao1; 

    //calcular e armazenar o superpoder da carta 1
    float inverso_densidade1 = 1 / densidadePop1;
    float super_poder1 = (float)numPopulacao1 + (float)areaKM1 + (float)PIB1 + (float)pontosTuristicos1 + (float)PIBperCapita1 + inverso_densidade1 ;


    //entrada de dados referentes a carta de numero 2
    printf("DADOS DA CARTA 2 \n");
    printf("Informe o estado (ex:A,B,C,...):");
    scanf(" %c", &estado2);  
    printf("Informe o Codigo da carta (ex:01,02,...):");
    scanf("%s", codigoCarta2);
    printf("Informe o Nome da Cidade (ex:São Paulo):");
    scanf(" %[^\n]", nomeCidade2);  
    printf("Informe o numero de Habitantes:");
    scanf("%lu", &numPopulacao2);  // Corrigido para %lu (unsigned long int)
    printf("Informe a área da cidade(KM²):");
    scanf("%f", &areaKM2);
    printf("Informe o PIB da cidade:");
    scanf("%f", &PIB2);
    printf("Informe o a quantidade de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);


    //variaveis(com calculos) para os dados da carta 2
    float densidadePop2 = (float) numPopulacao2 / areaKM2; 
    float PIBperCapita2 = (float) PIB2 / numPopulacao2; 

    //calcular e armazenar o superpoder da carta 2
    float inverso_densidade2 = 1 / densidadePop2;
    float super_poder2 = (float)numPopulacao2 + (float)areaKM2 + (float)PIB2 + (float)pontosTuristicos2 + (float)PIBperCapita2 + inverso_densidade2 ;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //exibir dados referentes a carta de numero 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", numPopulacao1);  // Corrigido para %lu (unsigned long int)
    printf("Área: %.2f km²\n", areaKM1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidadePop1);
    printf("PIB per capita: %.2f reais\n", PIBperCapita1);
    printf("Super Poder: %.2f \n", super_poder1);
    printf("-------------------------------------------");

    //exibir dados referentes a carta de numero 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", numPopulacao2);  // Corrigido para %lu (unsigned long int)
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per capita: %.2f reais\n", PIBperCapita2);
    printf("Super Poder: %.2f \n", super_poder2);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Comparação das cartas
    printf("\nComparação de Cartas:\n"); 
    printf("\n(se o resultado for 1, carta 1 vence, se o resultado for 0 carta 2 vence)\n");     
    printf("População: %d\n", numPopulacao1 > numPopulacao2);
    printf("Área: %d\n", areaKM1 > areaKM2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePop1 > densidadePop2);
    printf("PIB per capita: %d \n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: %d \n", super_poder1 > super_poder2);

    return 0;
}

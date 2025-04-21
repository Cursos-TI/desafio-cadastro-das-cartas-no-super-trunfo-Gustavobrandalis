#include <stdio.h>

#include <stdio.h>

int main(){
//Nesta parte do codigo declaro as variaveis
    char estado1[15]; 
    char estado2[15]; 
    char codigo1[4]; 
    char codigo2[4];  
    char cidade1[15]; 
    char cidade2[15];
    int  populacao1; 
    int populacao2; 
    int turismo1; 
    int turismo2; 
    float area1; 
    float area2; 
    float pib1; 
    float pib2;

// neste ponto, é feito uam interação com o usuario.
    printf("Ola, Seja bem vindo ao Super Trunfo, vamos iniciar fazendo o cadastro de suas primeiras cartas.\n");
    printf("Siga os seguintes passos:\n");
    printf("Obs: Caso tiver nomes compostos usar _ , pois o codigo nao aceita espacos\n");

//nestas linhas abaixo, é armazenado os dados nas vareaveis  
    printf("Escolha seu estado:\n");
    scanf("%s" , &estado1);

    printf("Escolha um codigo para sua carta(4 caracteres,Ex:A001):\n");
    scanf("%s" , &codigo1);

    printf("Escolha uma cidade de seu estado:\n");
    scanf("%s" , &cidade1);

    printf("Qual a populacao de seu estado?:\n");
    scanf("%d" , &populacao1);

    printf("Qual o PIB(produto interno bruto), de seu estado?:\n");
    scanf("%f" , &pib1);

    printf("Qual seria a area em quilometros quadrados?:\n");
    scanf("%f" , &area1);

    printf("Quantos pontos turisticos?\n");
    scanf("%d" , &turismo1);

    printf("Agora vamos criar sua segunda carta. \n");
    
    printf("Escolha seu estado: \n");
    scanf("%s" , &estado2);

    printf("Escolha um codigo para sua carta(4 caracteres,Ex:A001). Lembrando que deve ser diferente da sua primeira carta: \n");
    scanf("%s" , &codigo2);

    printf("Escolha uma cidade de seu estado: \n");
    scanf("%s" , &cidade2);

    printf("Qual a populacao de seu estado?: \n");
    scanf("%d" , &populacao2);

    printf("Qual o PIB(produto interno bruto), de seu estado?: \n");
    scanf("%f" , &pib2);

    printf("Qual seria a area em quilometros quadrados?: \n");
    scanf("%f" , &area2);
    
    printf("Quantos pontos turisticos?\n");
    scanf("%d" , &turismo2);

//nestas linha é mostrado os dados de cada variaveis.
    printf("\n");
    printf("Carta 1\n");
    printf("Estado:  %s \n" , estado1);
    printf("Codigo: %s \n" ,codigo1);
    printf("Cidade: %s \n" , cidade1);
    printf("Populcao: %d milhoes\n" , populacao1);
    printf("PIB: %f bilhoes \n" , pib1);
    printf("Area: %f km2\n" , area1);
    printf("Pontos turisticos:%d \n" , turismo1);
    printf("\n");
    printf("Carta 2\n");
    printf("Estado:  %s \n" , estado2);
    printf("Codigo: %s \n" , codigo2);
    printf("Cidade: %s \n" , cidade2);
    printf("Populcao: %d milhoes \n" , populacao2);
    printf("PIB:%f bilhoes \n" , pib2);
    printf("Area: %f km2 \n" , area2);
    printf("Pontos turisticos:%d \n" , turismo2);

    return 0;
}

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
    float area1, densidade1, densidade2, capita1, capita2; 
    float area2; 
    float pib1; 
    float pib2;
    int pontuacao1, pontuacao2, opcao;
    

    pontuacao1 = 0;
    pontuacao2 = 0;

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
    densidade1 = populacao1 / area1; //nesta linha é feito o calculo de densidade demografica
    printf("Densidade demografica: %.2f\n", densidade1);
    capita1 = pib1 / populacao1;
    printf("PIB per capita: %f\n", capita1);
    printf("\n");
    printf("Carta 2\n");
    printf("Estado:  %s \n" , estado2);
    printf("Codigo: %s \n" , codigo2);
    printf("Cidade: %s \n" , cidade2);
    printf("Populcao: %d milhoes \n" , populacao2);
    printf("PIB:%f bilhoes \n" , pib2);
    printf("Area: %f km2 \n" , area2);
    printf("Pontos turisticos:%d \n" , turismo2);
    densidade2 = populacao2 / area2;
    printf("Densidade demografica:%.2f\n", densidade2);
    capita2 = pib2 / populacao2;  //nesta linha é calculado o PIB percapita dos estados
    printf("PIB per capita: %f\n", capita2);
    printf("\n");

    // nestas parte é dado a opcao para o usuario de comparacao das cartas 
    printf("Agora que temos os atributos de suas cartas, vamos ver qual e a melhor!\n");
    printf("Escolha dentro destas opcoes qual valor quer comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - PIB\n");
    printf("3 - Area\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("6 - PIB per capita");
    scanf("%d" , &opcao);
    //aqui é usado a funcao switch para pegar a opcao escolhida e calcular as variaveis 
    switch (opcao){
        case 1:
        if(populacao1 > populacao2){
            printf("A populacao do %s e maior\n" , estado1);
            pontuacao1 += 10;
        } 
        
        else if(populacao1 < populacao2){
            printf("A populacao do %s e maior\n", estado2);
            pontuacao2 += 10; 
        }
        else{
                printf("As populacoes sao igual\n");
        }
        break;
        
        case 2:
        if(pib1 > pib2){
            printf("O PIB do %s e maior\n" , estado1);
            pontuacao1 += 10;
        }
        else if(pib1 < pib2){
            printf("O PIB do %s e maior\n", estado2);
            pontuacao2 += 10; 
        }
        else{
            printf("Os PIBS sao igual\n"); 
        }
            break;
        
        case 3:
        if(area1 > area2){
            printf("A area do %s e maior\n" , estado1);
            pontuacao1 += 10;
        }    
        else if(area1 < area2){
            printf("A area do %s e maior\n", estado2);
            pontuacao2 += 10;
        }
        else{
            printf("As areas sao iguais");
        }
        break;
        
        case 4:
        if(turismo1 > turismo2){
            printf("%s tem mais pontos turisticos\n" , estado1);
            pontuacao1 += 10;
        }
        else if(turismo1 < turismo2){
            printf("%s tem mais pontos turisticos\n", estado2);
            pontuacao2 += 10;
        }
        else{
            printf("Os dois estados tem a mesma quantidade de pontos turisticos"); 
        }
        break;
        
        case 5:
        if(densidade1 < densidade2){
            printf("A densidade de %s e menor!\n", estado1);
        pontuacao1 += 10;
        }
        else if(densidade1 > densidade2){
            printf("A densidade de %s e menor!\n", estado2);
        pontuacao2 += 10;
        }
        else{
            printf("As densidades sao iguais\n");
        }  
        break;
        
        case 6:
        if(capita1 > capita2){
            printf("O PIB per capita de %s e maior\n", estado1);
            pontuacao1 += 10;
        }
        else if(capita1 < capita2){
            printf("O PIB per capita de %s e maior\n",estado2);
            pontuacao2 += 10;
        }    
        else{
            printf("Os PIB per capita sao iguais\n");    
        }
        break;
        
        default: 
        printf("A opcao e invalida");
    }
   
    //Nestas linhas o codigo imprime a pontuação e quem foi o vencedor.
        printf("Pontuacao Final\n");
        printf("%s: %d\n", estado1 , pontuacao1);
        printf("%s: %d\n", estado2 , pontuacao2);
    
    if(pontuacao1 < pontuacao2){
        printf("A carta %s e melhor que a %s\n" ,estado1 , estado2);
}
    else if(pontuacao1 > pontuacao2){
        printf("A carta %s e melhor que a %s\n",estado2, estado1);
}
    else{
        printf("As duas cartas tem a mesma pontuacao!");
}

    return 0;
} 


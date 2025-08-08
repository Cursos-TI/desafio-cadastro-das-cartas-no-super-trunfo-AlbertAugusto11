#include <stdio.h>

int main(){
    printf("BEM VINDO AO JOGO SUPER TRUNFO CIDADES\n\n");

    //CARTA 01
    char estado_carta1;
    char cod_carta1[10];
    char cidade_carta1[30];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    //CARTA 02
    char estado_carta2;
    char cod_carta2[10];
    char cidade_carta2[30];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    //CADASTRANDO A 1ª CARTA
    printf("Vamos Cadastrar a 1ª carta\n");

    printf("Digite o Codigo da carta 01 - Ex:. Letra do estado + numero de 01 a 04: ");
    scanf("%s", cod_carta1);

    printf("Digite o Nome da Cidade da carta 01: ");
    scanf(" %[^\n]", cidade_carta1);

    printf("Digite o Estado da carta 01 - Ex:. Letras de A a H (representam um dos oito estados): ");
    scanf(" %c", &estado_carta1);

    printf("Digite a População da carta 01: ");
    scanf("%d", &populacao_carta1);

    printf("Digite o PIB da carta 01: ");
    scanf("%f", &pib_carta1);

    printf("Digite a Área da carta 01 (em km²): ");
    scanf("%f", &area_carta1);

    printf("Digite o Numero de Pontos Turisticos da carta 01: ");
    scanf("%d", &pontos_turisticos_carta1);

    //CADASTRANDO A 2ª CARTA
    printf("\nVamos Cadastrar a 2ª carta\n");

    printf("Digite o Codigo da carta 02 - Ex:. Letra do estado + numero de 01 a 04: ");
    scanf("%s", cod_carta2);

    printf("Digite o Nome da Cidade da carta 02: ");
    scanf(" %[^\n]", cidade_carta2);

    printf("Digite o Estado da carta 02 - Ex:. Letras de A a H (representam um dos oito estados): ");
    scanf(" %c", &estado_carta2);

    printf("Digite a População da carta 02: ");
    scanf("%d", &populacao_carta2);

    printf("Digite o PIB da carta 02: ");
    scanf("%f", &pib_carta2);

    printf("Digite a Área da carta 02 (em km²): ");
    scanf("%f", &area_carta2);

    printf("Digite o Numero de Pontos Turisticos da carta 02: ");
    scanf("%d", &pontos_turisticos_carta2);


    // IMPRIMINDO AS INFORMAÇÕES
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("População: %d habitantes\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de Pontos Turisticos: %d\n\n", pontos_turisticos_carta1);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("População: %d habitantes\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    
    return 0;
}

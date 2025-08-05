#include <stdio.h>
#include <string.h> // Necessário para a função strtok para fgets

int main(){
    char estado01[50]; char codigo01[50]; char cidade01[50];
    int populacao01; int turismo01;
    float area01; float pib01; float densidade01; float capita01;

    // Primeira Carta (Mesmo que so foi citado na video aula sobre fgets, fui atrás descobrir como usar ele)
    printf("*** Digite a PRIMEIRA Carta ***\n");
    printf("Digite o nome do Estado: \n");
    fgets(estado01, 50, stdin);
    strtok(estado01, "\n"); 

    printf("Digite o Código: \n");
    fgets(codigo01, 50, stdin);
    strtok(codigo01, "\n");

    printf("Digite a Cidade: \n");
    fgets(cidade01, 50, stdin);
    strtok(cidade01, "\n");

    printf("Digite a População: \n");
    scanf("%d", &populacao01);

    printf("Digite o KM da Área: \n");
    scanf("%f", &area01);

    printf("Digite o PIB (Apenas números): \n");
    scanf("%f", &pib01);

    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &turismo01);
    
    densidade01 = (float)populacao01 / area01;
    capita01 = pib01 / (float)populacao01;

    printf("Nome do Estado: %s\n", estado01);
    printf("Número do Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("Número da População: %d\n", populacao01);
    printf("Extensão da Área: %.2f\n", area01);
    printf("Valor do PIB: %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", turismo01);
    printf("Densidade Populacional: %.2f\n", densidade01);
    printf("PIB per Capita: %.2f\n", capita01);

    // Segunda Carta
    char estado02[50]; char codigo02[50]; char cidade02[50];
    int populacao02; int turismo02;
    float area02; float pib02; float densidade02; float capita02;

    // Limpa o buffer da entrada para não causar problemas para a proxima string
    getchar();

    printf("*** Digite a SEGUNDA Carta ***\n");

    printf("Digite o nome do Estado: \n");
    fgets(estado02, 50, stdin);
    strtok(estado02, "\n");

    printf("Digite o Código: \n");
    fgets(codigo02, 50, stdin);
    strtok(codigo02, "\n");

    printf("Digite a Cidade: \n");
    fgets(cidade02, 50, stdin);
    strtok(cidade02, "\n");

    printf("Digite a População: \n");
    scanf("%d", &populacao02);

    printf("Digite o KM da Área: \n");
    scanf("%f", &area02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib02);

    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &turismo02);
    //Cálculo da densidade e PIB per capital
    densidade02 = (float)populacao02 / area02;
    capita02 = pib02 / (float)populacao02;

    printf("Nome do Estado: %s\n", estado02);
    printf("Número do Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("Número da População: %d\n", populacao02);
    printf("Extensão da Área: %.2f\n", area02);
    printf("Valor do PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", turismo02);
    printf("Densidade Populacional: %.2f\n", densidade02);
    printf("PIB per Capita: %.2f\n", capita02);

    // Cálculo para a lógica da cartas vencedora
    float superpoder01 = populacao01 + area01 + (float)turismo01 + pib01 + capita01 + (1.0 / densidade01);
    float superpoder02 = populacao02 + area02 + (float)turismo02 + pib02 + capita02 + (1.0 / densidade02);
    unsigned int resultadopopulacao = populacao01 > populacao02;
    unsigned int resultadoarea = area01 > area02;
    unsigned int resultadopib = pib01 > pib02;
    unsigned int resultadopontos = turismo01 > turismo02;
    unsigned int resultadodensidade = densidade01 < densidade02; // Invertido, menor densidade é melhor
    unsigned int resultadopibpercapita = capita01 > capita02;
    unsigned int resultadosuperpoder = superpoder01 > superpoder02;

    // Resultado da disputa na tela 
    printf("******* Comparação de Cartas *******\n");
    printf("*** Carta 1 GANHOU ? (1) = SIM, (0) = NÃO ***\n");
    printf("População: Carta 1 VENCEU? %d\n", resultadopopulacao);
    printf("Área: Carta 1 VENCEU? %d\n", resultadoarea);
    printf("PIB: Carta 1 VENCEU? %d\n", resultadopib);
    printf("Pontos Túristicos: Carta 1 VENCEU? %d\n", resultadopontos);
    printf("Densidade Populacional: Carta 1 VENCEU? %d\n", resultadodensidade);
    printf("PIB Per Capita: Carta 1 VENCEU? %d\n", resultadopibpercapita);
    printf("Super Poder: Carta 1 VENCEU? %d\n", resultadosuperpoder);

    return 0;
}
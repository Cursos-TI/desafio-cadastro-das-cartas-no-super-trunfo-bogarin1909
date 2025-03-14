//Bibliotecas em uso 
#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída de dados.
#include <string.h> //Inclusão da biblioteca para a manipulação de strings
#include <locale.h> //Inclusão da biblioteca locaçização para configurações especiais (caracteres especiais, virgula e pontos decimais , configuraa linguagem do programa em português.)

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Ajuste de localidade para usar vírgula no número se necessário

    // Declaração das variáveis
    char estado[20];
    char codigo_da_carta[20];
    char nome_da_cidade[50];
    int populacao;
    double area;
    float pib;
    int pontos_turisticos;
    
    printf("CARTA 01\n");

    // Leitura e exibição do estado
    printf("Digite a letra do estado: ");
    scanf("%s", estado);
    printf("ESTADO: %s\n", estado);

    // Leitura e exibição do código da carta
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta);
    printf("CÓDIGO DA CARTA: %s\n", codigo_da_carta);

    // Leitura do nome da cidade
    getchar();  // Limpa o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    printf("NOME DA CIDADE: %s", nome_da_cidade); 

    // Leitura e exibição da população
    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);
    printf("POPULAÇÃO: %d\n", populacao);

    // Leitura e exibição da área
    printf("Digite a área: ");
    scanf("%lf", &area); // %lf para ler double
    printf("ÁREA: %.2f km²\n", area); // %.2f para exibir 2 casas decimais

    // Leitura e exibição do PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais\n", pib); // Forma correta %.2f para mostrar 2 casas decimais

    // Leitura e exibição da quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos); 

    printf("\n");

     
    printf("CARTA 02\n");
    // Leitura e exibição do estado
    printf("Digite a letra do estado: ");
    scanf("%s", estado);
    printf("ESTADO: %s\n", estado);

    // Leitura e exibição do código da carta
    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta);
    printf("CÓDIGO DA CARTA: %s\n", codigo_da_carta);

    // Leitura do nome da cidade
    getchar();  // Limpa o buffer do teclado
    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    printf("NOME DA CIDADE: %s", nome_da_cidade); 

    // Leitura e exibição da população
    printf("Digite a quantidade da população: ");
    scanf("%d", &populacao);
    printf("POPULAÇÃO: %d\n", populacao);

    // Leitura e exibição da área
    printf("Digite a área: ");
    scanf("%lf", &area); // %lf para ler double
    printf("ÁREA: %.2f km²\n", area); // %.2f para exibir 2 casas decimais

    // Leitura e exibição do PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais\n", pib); // Forma correta %.2f para mostrar 2 casas decimais

    // Leitura e exibição da quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("PONTOS TURÍSTICOS: %d\n", pontos_turisticos); 

    printf("\n");
   


    return 0;
}

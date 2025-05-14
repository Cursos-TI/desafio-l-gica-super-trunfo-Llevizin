#include <stdio.h> // Biblioteca que permite a entrada e saída de dados
#include <string.h> // Biblioteca que permite a manipulação de strings

// Função Principal do Programa
int main(){

    char pais1[20]; // Declara um array de 20 caracteres
    char estado1[4]; // Declara um array de 4 caracteres
    char codigo_carta1[4]; // Declara um array de 4 caracteres
    char nome_cidade1[20]; // Declara um array de 20 caracteres
    int populacao1; // Declara uma variável do tipo int
    float area1; // Declara uma variável do tipo float
    float pib1; // Declara uma variável do tipo float
    float pib1_reais; // Declara uma variavel do tipo float
    int numero_pontos_turisticos1; // Declara uma variável do tipo int
    float densidade_populacional1; // Declara uma variáveldo do tipo float
    float pib_per_capita1; // Declara uma variável do tipo float

    char pais2[20]; // Declara um array de 20 caracteres
    char estado2[4]; // Declara um array de 4 caracteres
    char codigo_carta2[4]; // Declara um array de 4 caracteres
    char nome_cidade2[20]; // Declara um array de 20 caracteres
    int populacao2; // Declara uma variável do tipo int
    float area2; // Declara uma variável do tipo float
    float pib2; // Declara uma variável do tipo float
    float pib2_reais; // Declara uma variavel do tipo float
    int numero_pontos_turisticos2; // Declara uma variável do tipo int
    float densidade_populacional2; // Declara uma variáveldo do tipo float
    float pib_per_capita2; // Declara uma variável do tipo float


    // Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1\n"); // Exibe o título para a entrada da Carta 1

    printf("Digite o País: "); // Solicita o nome do país
    fgets(pais1, sizeof(pais1), stdin); // Lê uma linha (pais1), incluindo espaços
    pais1[strcspn(pais1, "\n")] = '\0'; // Remove o '\n' (quebra de linha) do final da string

    printf("Digite o estado(ex: SP): "); // Solicita o estado
    scanf("%2s", &estado1); // Lê o estado

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: S01): "); // Solicita o código da cidade
    scanf("%3s", &codigo_carta1); // Lê o código com até 3 caracteres

    printf("Digite o nome da cidade: "); // Solicita o nome da cidade
    getchar(); // Limpa o "enter" deixado no buffer pelo scanf anterior
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); // Lê uma linha (nome_cidade1), incluindo espaços
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Remove o '\n' (quebra de linha) do final da string

    printf("Número de habitantes: "); // Solicita o número de habitantes
    scanf("%d", &populacao1); // Lê a população

    printf("Área da cidade em quilômetros quadrados: "); // Solicita a área da cidade em quilômetros quadrados
    scanf("%f", &area1); // Lê a área da cidade

    printf("O Produto Interno Bruto da cidade: "); // Solicita o valor do PIB
    scanf("%f", &pib1); // Lê o PIB
    pib1_reais = pib1 * 1e9; // Converte o PIB de bilhões para reais e armazena em "pib1_reais"

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos1); // Lê a quantidade de pontos turísticos

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2\n"); // Exibe o título para a entrada da Carta 2

    printf("Digite o País: "); // Solicita o nome do país
    getchar(); // Limpa o "enter" deixado no buffer pelo scanf anterior
    fgets(pais2, sizeof(pais2), stdin); // Lê uma linha (pais2), incluindo espaços
    pais2[strcspn(pais2, "\n")] = '\0'; // Remove o '\n' (quebra de linha) do final da string

    printf("Digite o estado(ex: SP): "); // Solicita o estado 
    scanf("%2s", &estado2); // Lê o estado

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: S01): "); // Solicita o código da cidade
    scanf("%3s", &codigo_carta2); // Lê o código com até 3 caracteres

    printf("Digite o nome da cidade: "); // Solicita o nome da cidade
    getchar(); // Limpa o "enter" deixado no buffer pelo scanf anterior
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); // Lê uma linha (nome_cidade1), incluindo espaços
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // Remove o '\n' (quebra de linha) do final da string

    printf("Número de habitantes: "); // Solicita o número de habitantes
    scanf("%d", &populacao2); // Lê a população

    printf("Área da cidade em quilômetros quadrados: "); // Solicita a área da cidade em quilômetros quadrados
    scanf("%f", &area2); // Lê a área da cidade

    printf("O Produto Interno Bruto da cidade: "); // Solicita o valor do PIB
    scanf("%f", &pib2); // Lê o PIB
    pib2_reais = pib2 * 1e9; // Converte o PIB de bilhões para reais e armazena em "pib1_reais"

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos2); // Lê a quantidade de pontos turísticos


    //Cálculo da Densidade Populacional e PIB per Capita - Carta 1
    densidade_populacional1 = (float) populacao1 / area1; // Divide a populacao1(convertida em float) pela area1 para obter a densidade populacional
    pib_per_capita1 = pib1_reais / (float) populacao1; // Converte o pib1 de bilhões para reais e divide pela populacao1(convertida em float) para obter o PIB per capita

    //Cálculo da Densidade Populacional e PIB per Capita - Carta 2
    densidade_populacional2 = (float) populacao2 / area2; // Divide a populacao2(convertida em float) pela area2 para obter a densidade populacional
    pib_per_capita2 = pib2_reais / (float) populacao2; // Converte o pib2 de bilhões para reais e divide pela populacao2(convertida em float) para obter o PIB per capita


    // Exibição de dados Carta 1
    printf("\nCarta 1:\n"); // Função usada pra exibir a mensagem "Carta 1"
    printf("País: %s\n", pais1); // Função usada para exibir os dados q estão armazenados na variável "pais1"
    printf("Estado: %s\n", estado1); // Função usada para exibir os dados que estão armazenado na variável "estado1"
    printf("Código: %s\n", codigo_carta1); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta1"
    printf("Nome da Cidade: %s\n", nome_cidade1); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade1"
    printf("População: %d\n", populacao1); // Função usada para exibir os dados que estão armazenado na variável "populacao1"
    printf("Área: %.2f km²\n", area1); // Função usada para exibir os dados que estão armazenado na variável "area1"
    printf("PIB: %.2f bilhões de reais\n", pib1); // Função usada para exibir os dados que estão armazenado na variável "pib1"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos1"
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1 ); // Funçao usada para exibir os dados que estão armazenados na variável "densidade_pupulacional1"
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // Função usada para exibir os dados que estão armazenados na variável "pib_per_capita1"

    // Exibição de dados Carta 2
    printf("\nCarta 2:\n"); // Função usada pra exibir a mensagem "Carta 2"
    printf("País: %s\n", pais2); // Função usada para exibir os dados q estão armazenados na variável "pais2"
    printf("Estado: %s\n", estado2); // Função usada para exibir os dados que estão armazenado na variável "estado2"
    printf("Código: %s\n", codigo_carta2); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta2"
    printf("Nome da Cidade: %s\n", nome_cidade2); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade2"
    printf("População: %d\n", populacao2); // Função usada para exibir os dados que estão armazenado na variável "populacao2"
    printf("Área: %.2f km²\n", area2); // Função usada para exibir os dados que estão armazenado na variável "area2"
    printf("PIB: %.2f bilhões de reais\n", pib2); // Função usada para exibir os dados que estão armazenado na variável "pib2"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos2"
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2 ); // Funçao usada para exibir os dados que estão armazenados na variável "densidade_pupulacional1"
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // Função usada para exibir os dados que estão armazenados na variável "pib_per_capita1"


    // Menu para a comparação dos atributos
    int escolhaAtributo; // Declara uma variável do tipo int para armazenar a escolha do usuário sobre qual atributo comparar

    printf("\n-- Atributos para comparação --\n"); // Imprime o título da seção de escolha de atributos
    printf("1. População\n"); // Exibe a opção 1: População
    printf("2. Área\n"); // Exibe a opção 2: Área
    printf("3. PIB\n"); // Exibe a opção 3: PIB
    printf("4. Números de pontos turísticos\n"); // Exibe a opção 4: Pontos turísticos
    printf("5. Densidade demográfica\n"); // Exibe a opção 5: Densidade populacional
    printf("Esolha qual atributo deseja fazer a comparação: "); // Solicita ao usuário que escolha um atributo
    scanf("%d", &escolhaAtributo); // Lê a opção escolhida pelo usuário e armazena na variável escolhaAtributo

    switch (escolhaAtributo) { // Inicia uma estrutura condicional para avaliar o valor de escolhaAtributo

    case 1: // Caso o atributo escolhido seja População
    if (populacao1 > populacao2){ // Se a população da carta 1 for maior
        printf("\nResultado da comparação\n"); // Imprime cabeçalho do resultado
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2); // Mostra os nomes dos países comparados
        printf("Atributo: População\n"); // Informa o atributo comparado
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n", populacao1, populacao2); // Mostra os valores de população
        printf("Carta vencedora: Carta 1\n"); // Declara a carta 1 como vencedora
    } else if (populacao2 > populacao1) { // Se a população da carta 2 for maior
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: População\n");
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n", populacao1, populacao2);
        printf("Carta vencedora: Carta 2"); // Declara a carta 2 como vencedora
    } else { // Se as populações forem iguais
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: População\n");
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n", populacao1, populacao2);
        printf("Carta vencedora: Empate\n"); // Declara empate
    }
    break; // Encerra o case 1

    case 2: // Caso o atributo escolhido seja Área
    if (area1 > area2){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Área\n");
        printf("Valores: %.2f km² (Carta 1) - %.2f km² (Carta 2)\n", area1,area2); // Mostra valores com 2 casas decimais
        printf("Carta vencedora: Carta 1\n");
    } else if( area2 > area1){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Área\n");
        printf("Valores: %.2f km² (Carta 1) - %.2f km² (Carta 2)\n", area1,area2);
        printf("Carta vencedora: Carta 2\n");
    } else {
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Área\n");
        printf("Valores: %.2f km² (Carta 1) - %.2f km² (Carta 2)\n", area1,area2);
        printf("Carta vencedora: Empate\n");
    }
    break;

    case 3: // Caso o atributo escolhido seja PIB
    if (pib1 > pib2){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: PIB\n");
        printf("Valores: %.2f bilhões de reais (Carta 1) - %.2f bilhões de reais (Carta 2)\n", pib1, pib2);
        printf("Carta vencedora: Carta 1\n");
    } else if( pib2 > pib1){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: PIB\n");
        printf("Valores: %.2f bilhões de reais (Carta 1) - %.2f bilhões de reais (Carta 2)\n", pib1, pib2);
        printf("Carta vencedora: Carta 2\n");
    } else {
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: PIB\n");
        printf("Valores: %.2f bilhões de reais (Carta 1) - %.2f bilhões de reais (Carta 2)\n", pib1, pib2);
        printf("Carta vencedora: Empate\n");
    }
    break;

    case 4: // Caso o atributo escolhido seja número de pontos turísticos
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Pontos turísticos\n");
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n",  numero_pontos_turisticos1, numero_pontos_turisticos2);
        printf("Carta vencedora: Carta 1\n");
    } else if( numero_pontos_turisticos2 > numero_pontos_turisticos1){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Pontos turísticos\n");
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n",  numero_pontos_turisticos1, numero_pontos_turisticos2);
        printf("Carta vencedora: Carta 2\n");
    } else {
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Pontos turísticos\n");
        printf("Valores: %d (Carta 1) - %d (Carta 2)\n", numero_pontos_turisticos1, numero_pontos_turisticos2);
        printf("Carta vencedora: Empate\n");
    }
    break;

    case 5: // Caso o atributo escolhido seja densidade populacional
    if (densidade_populacional1 < densidade_populacional2){ // Aqui, menor densidade vence
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Densidade Populacional\n");
        printf("Valores: %.2f hab/km² (Carta 1) - %.2f hab/km² (Carta 2)\n", densidade_populacional1, densidade_populacional2);
        printf("Carta vencedora: Carta 1\n");
    } else if( densidade_populacional2 < densidade_populacional1){
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Densidade Populacional\n");
        printf("Valores: %.2f hab/km² (Carta 1) - %.2f hab/km² (Carta 2)\n", densidade_populacional1, densidade_populacional2);
        printf("Carta vencedora: Carta 2\n");
    } else {
        printf("\nResultado da comparação\n");
        printf("Países: %s (Carta 1) - %s (Carta 2)\n", pais1, pais2);
        printf("Atributo: Densidade Populacional\n");
        printf("Valores: %.2f hab/km² (Carta 1) - %.2f hab/km² (Carta 2)\n", densidade_populacional1, densidade_populacional2);
        printf("Carta vencedora: Empate\n");
    }
    break;

    default: // Caso o usuário digite um número inválido
    printf("Opção inválida. Tente novamente"); // Mensagem de erro
}

    //Indica que o programa terminou
    return 0;

}
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


    int opcao1, opcao2; // Declara duas variáveis do tipo int
    float valor1_carta1, valor1_carta2; // Declara duas variáveis do tipo float
    float valor2_carta1, valor2_carta2; // Declara duas variáveis do tipo float
    float soma_carta1, soma_carta2; // Declara uma variável do tipo float

    // Exibe o menu para o usuário escolher o primeiro atributo para comparação
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");

    // Lê a opção escolhida para o primeiro atributo
    scanf("%d", &opcao1);

    // Verifica qual foi a escolha do primeiro atributo
    switch(opcao1) {
    case 1: // Se for População
        printf("\nEscolha o segundo atributo para comparação:\n");
        // Lista todas as opções exceto a já escolhida (População)
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &opcao2); // Lê o segundo atributo
        break;
    case 2: // Se for Área
        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &opcao2);
        break;
    case 3: // Se for PIB
        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &opcao2);
        break;
    case 4: // Se for Pontos Turísticos
        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &opcao2);
        break;
    case 5: // Se for Densidade Populacional
        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("6. PIB per Capita\n");
        scanf("%d", &opcao2);
        break;
    case 6: // Se for PIB per Capita
        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        scanf("%d", &opcao2);
        break;
    default: // Caso o usuário digite um número inválido
        printf("Opção inválida!\n");
        return 1; // Encerra o programa
}

// Atribui os valores do primeiro atributo das duas cartas com base na escolha
switch(opcao1){
    case 1: valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; break;
    case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
    case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
    case 4: valor1_carta1 = (float)numero_pontos_turisticos1; valor1_carta2 = (float)numero_pontos_turisticos2; break;
    case 5: valor1_carta1 = densidade_populacional1; valor1_carta2 = densidade_populacional2; break;
    case 6: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
}

// Atribui os valores do segundo atributo das duas cartas com base na escolha
switch(opcao2){
    case 1: valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; break;
    case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
    case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
    case 4: valor2_carta1 = (float)numero_pontos_turisticos1; valor2_carta2 = (float)numero_pontos_turisticos2; break;
    case 5: valor2_carta1 = densidade_populacional1; valor2_carta2 = densidade_populacional2; break;
    case 6: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
}

// Soma os valores dos dois atributos para cada carta
soma_carta1 = valor1_carta1 + valor2_carta1;
soma_carta2 = valor1_carta2 + valor2_carta2;

// Exibe os dados da Carta 1
printf("\n-- Comparando cartas: --\n");
printf("\nCarta 1:\n");
printf("País: %s\n", pais1);

// Exibe o primeiro atributo escolhido da carta 1
if(opcao1 == 1){
     printf("População: %d\n", (int)valor1_carta1);
} else if(opcao1 == 2){
     printf("Área: %.2f km²\n", valor1_carta1);
} else if(opcao1 == 3){
     printf("PIB: %.2f bilhões de reais\n", valor1_carta1);
} else if(opcao1 == 4){
    printf("Pontos Turísticos: %d\n", (int)valor1_carta1);
} else if(opcao1 == 5){
    printf("Densidade Demográfica: %.2f hab/km²\n", valor1_carta1);
} else if (opcao1 == 6){
    printf("PIB per Capita: %.2f reais\n", valor1_carta1);
}

// Exibe o segundo atributo escolhido da carta 1
if(opcao2 == 1){
     printf("População: %d\n", (int)valor2_carta1);
} else if(opcao2 == 2){
     printf("Área: %.2f km²\n", valor2_carta1);
} else if(opcao2 == 3){
     printf("PIB: %.2f bilhões de reais\n", valor2_carta1);
} else if(opcao2 == 4){
    printf("Pontos Turísticos: %d\n", (int)valor2_carta1);
} else if(opcao2 == 5){
    printf("Densidade Demográfica: %.2f hab/km²\n", valor2_carta1);
} else if (opcao2 == 6){
    printf("PIB per Capita: %.2f reais\n", valor2_carta1);
}

// Exibe a soma dos dois atributos escolhidos para a carta 1
printf("Soma dos atributos escolhidos: %.2f\n", soma_carta1);

// Exibe os dados da Carta 2
printf("\nCarta 2:\n");
printf("País: %s\n", pais2);

// Exibe o primeiro atributo escolhido da carta 2
if(opcao1 == 1){
     printf("População: %d\n", (int)valor1_carta2);
} else if(opcao1 == 2){
     printf("Área: %.2f km²\n", valor1_carta2);
} else if(opcao1 == 3){
     printf("PIB: %.2f bilhões de reais\n", valor1_carta2);
} else if(opcao1 == 4){
    printf("Pontos Turísticos: %d\n", (int)valor1_carta2);
} else if(opcao1 == 5){
    printf("Densidade Demográfica: %.2f hab/km²\n", valor1_carta2);
} else if (opcao1 == 6){
    printf("PIB per Capita: %.2f reais\n", valor1_carta2);
}

// Exibe o segundo atributo escolhido da carta 2
if(opcao2 == 1){
     printf("População: %d\n", (int)valor2_carta2);
} else if(opcao2 == 2){
     printf("Área: %.2f km²\n", valor2_carta2);
} else if(opcao2 == 3){
     printf("PIB: %.2f bilhões de reais\n", valor2_carta2);
} else if(opcao2 == 4){
    printf("Pontos Turísticos: %d\n", (int)valor2_carta2);
} else if(opcao2 == 5){
    printf("Densidade Demográfica: %.2f hab/km²\n", valor2_carta2);
} else if (opcao2 == 6){
    printf("PIB per Capita: %.2f reais\n", valor2_carta2);
}

// Exibe a soma dos dois atributos escolhidos para a carta 2
printf("Soma dos atributos escolhidos: %.2f\n", soma_carta2);

// Compara a soma dos atributos e exibe o vencedor ou empate
printf("\nResultado: ");
if (soma_carta1 > soma_carta2){
    printf("Carta 1 venceu!");
} else if(soma_carta2 > soma_carta1){
    printf("Carta 2 venceu!");
} else {
    printf("Empate!");
}

    // Indica que o programa terminou
    return 0;

}
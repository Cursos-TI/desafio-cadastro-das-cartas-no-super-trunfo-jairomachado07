#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Todos os atributos foram feitos duplicados, com nomes parecidos apenas com o dois no final para diferenciar.
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nomecidade[20], nomecidade2[20];
    int populacao, populacao2, npontosturisticos, npontosturisticos2;
    float area, area2, pbi, pbi2;
    // Cadastro das Cartas:
    //Entrada dos dados da primeira  cidade
    printf("Digite o estado 1(letra): ");
    scanf(" %c", &estado);
    printf("Digite o codigo 1(3 digitos): ");
    scanf("%3s", codigo);
    printf("Digite o nome da cidade 1(ate 50 letras): ");
    scanf("%19s", nomecidade);
    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade 1: ");
    scanf("%f", &area);
    printf("Digite o PBI: ");
    scanf("%f", &pbi);
    printf("Digite o numero de pontos turisticos (inteiro): ");
    scanf("%d", &npontosturisticos);
    //Entrada dos dados da segunda cidade
    printf("Digite o estado 2(letra): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo 2(3 digitos): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade 2(ate 50 letras): ");
    scanf("%19s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PBI: ");
    scanf("%f", &pbi2);
    printf("Digite o numero de pontos turisticos (inteiro): ");
    scanf("%d", &npontosturisticos2);
    //mostrando os dados de cada uma das cartas    
    printf("Super Trunfo!\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PBI: %.2f\n", pbi);
    printf("Numero de Pontos Turisticos: %d\n", npontosturisticos);
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PBI: %.2f\n", pbi2);
    printf("Numero de Pontos Turisticos: %d\n", npontosturisticos2);
    
    return 0;
}

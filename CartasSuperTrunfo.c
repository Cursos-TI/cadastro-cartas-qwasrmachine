#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  #include <stdio.h>

  typedef struct{
      char state;     // Estado
      char code[4];   // Código
      char name[30];  // Nome
      int pop;        // População
      float area;     // Area em km^2
      float gdp;      // PIB
      int tours;      // Pontos turísticos
  } card;

  float density(int pop, float area) {
      return pop * area;
  }
  
  float gdpcapita(int pop, float gdp) {
      return gdp / pop;
  }
  
  // Área para entrada de dados

  card states[2];
  char num[3];

  for (int i=0; i<2; i++) {
      printf("--- Carta %d ---\n", i+1);
      
      printf("Estado (A-H): ");
      scanf(" %c", &states[i].state);

      printf("Código da Carta (ex: 01): ");
      scanf("%2s", num);
      sprintf(states[i].code, "%c%s", states[i].state, num);

      printf("Nome da Cidade: ");
      getchar(); // Limpar buffer
      fgets(states[i].name, sizeof(states[i].name), stdin);

      printf("População: ");
      scanf("%d", &states[i].pop);

      printf("Área (km²): ");
      scanf("%f", &states[i].area);

      printf("PIB: ");
      scanf("%f", &states[i].gdp);

      printf("Número de Pontos Turísticos: ");
      scanf("%d", &states[i].tours);

      printf("\n");
  }

  // Área para exibição dos dados da cidade

  for (int i=0; i<2; i++) {
      printf("--- Dados da Carta %d ---\n", i+1);
      printf("Estado: %c\n", states[i].state);
      printf("Código: %s\n", states[i].code);
      printf("Cidade: %s", states[i].name);
      printf("População: %d\n", states[i].pop);
      printf("Área: %.2f km²\n", states[i].area);
      printf("PIB: %.2f\n", states[i].gdp);
      printf("Pontos Turísticos: %d\n", states[i].tours);
      printf("Densidade: %.2f\n", density(states[i].pop, states[i].area));
      printf("PIB per Capita: %.2f\n", gdpcapita(states[i].pop, states[i].gdp));
      printf(".........................\n");
      printf("\n");
  }
  
  return 0;
} 

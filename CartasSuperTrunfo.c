#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  #include <stdio.h>

  typedef struct{
      char state;         // Estado
      char code[4];       // Código
      char name[30];      // Nome
      int pop;            // População
      float area;         // Area em km^2
      float gdp;          // PIB
      int tours;          // Pontos turísticos
      float density;      // Densidade populacional
      float gdpcapita;    // PIB per capita
      float power;        // Super Poder
  } card;
  
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
  
      states[i].density = states[i].pop * states[i].area;
      states[i].gdpcapita = states[i].gdp / states[i].pop;
  
      states[i].power = states[i].pop + 
          states[i].area + 
          states[i].gdp + 
          states[i].tours + 
          states[i].gdpcapita -
          states[i].density;
  
      printf("\n");
}

  // Área para exibição dos dados da cidade

  for (int i=0; i<2; i++) {
      printf("--- Dados da Carta %d ---\n", i+1);
      printf("Estado: %c\n", states[i].state);
      printf("Código: %s\n", states[i].code);
      printf("Cidade: %s", states[i].name); // já inclui \n
      printf("População: %d\n", states[i].pop);
      printf("Área: %.2f km²\n", states[i].area);
      printf("PIB: %.2f\n", states[i].gdp);
      printf("Pontos Turísticos: %d\n\n", states[i].tours);
      printf("Super poder: %.2f\n", states[i].power);
      printf(".........................\n");
      printf("\n");
  }

  // Comparação das cartas

  printf("Comparação de Cartas:\n\n");

  printf("População: Carta %s venceu (%d)\n",
         states[0].pop > states[1].pop ? states[0].code : states[1].code,
         states[0].pop > states[1].pop ? states[0].pop : states[1].pop);

  printf("Área: Carta %s venceu (%.2f)\n",
         states[0].area > states[1].area ? states[0].code : states[1].code,
         states[0].area > states[1].area ? states[0].area : states[1].area);

  printf("PIB: Carta %s venceu (%.2f)\n",
         states[0].gdp > states[1].gdp ? states[0].code : states[1].code,
         states[0].gdp > states[1].gdp ? states[0].gdp : states[1].gdp);

  printf("Pontos Turísticos: Carta %s venceu (%d)\n",
         states[0].tours > states[1].tours ? states[0].code : states[1].code,
         states[0].tours > states[1].tours ? states[0].tours : states[1].tours);

  printf("Densidade Populacional: Carta %s venceu (%.2f)\n",
         states[0].density < states[1].density ? states[0].code : states[1].code,
         states[0].density < states[1].density ? states[0].density : states[1].density);

  printf("PIB per Capita: Carta %s venceu (%.2f)\n",
         states[0].gdpcapita > states[1].gdpcapita ? states[0].code : states[1].code,
         states[0].gdpcapita > states[1].gdpcapita ? states[0].gdpcapita : states[1].gdpcapita);

  printf("Super Poder: Carta %s venceu (%.2f)\n",
         states[0].power > states[1].power ? states[0].code : states[1].code,
         states[0].power > states[1].power ? states[0].power : states[1].power);
  
  return 0;
} 

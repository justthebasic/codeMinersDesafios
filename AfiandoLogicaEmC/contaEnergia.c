#include <stdio.h>

int main() {
  int consumo1, consumo2, consumo3;
  

  // Lendo os valores de consumo das três máquinas
  scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

  //TODO: Calcule a média de consumo e a imprima com duas casas decimais.
  
  printf("%.2f", (float) (consumo1 + consumo2 + consumo3) / 3.0);
  return 0;
}


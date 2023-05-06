#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int quickSort(int array[], int inicio, int fim){ 
  int pivot = array[fim];
  int i = inicio - 1;
  
  for(int j = inicio; j <= fim - 1; j++ ){
    if(array[j] < pivot){
      i++;
      trocar(&array[i], &array[j]);
    }
  }
  trocar(&array[i + 1], &array[fim]);
  return(i + 1);
}

void ordenar(int array[], int inicio, int fim) {
  if (inicio < fim) {
    int pi = quickSort(array, inicio, fim);
    ordenar(array, inicio, pi - 1);
    ordenar(array, pi + 1, fim);
  }
}

int main() {
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  ordenar(joias, inicio, fim);
  
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}

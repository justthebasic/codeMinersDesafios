#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char *palavra, int len) {
  char *p1 = palavra;
  char *p2 = palavra + len - 1;
  while(p1 < p2){
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1++;
    p2--;
  }
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra, strlen (palavra));

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}
#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.
  const char* mensagem = (temperatura > 18 && temperatura < 24)? "Ideal":
                            (temperatura < 18) ? "Baixa" : "Alta";
    printf("%s", mensagem);                 
  return 0;
}
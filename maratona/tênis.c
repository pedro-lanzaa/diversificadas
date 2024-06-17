#include <stdio.h>
#include <stdlib.h>

int main() {
  char resultado[6];
  int vitoria = 0;

  // Resultado dos 6 jogos
  printf("Digite os resultados dos jogos utilizando V ou P!\n");
  
  for (int y = 0; y < 6; y++) {

    scanf(" %c", &resultado[y]);

    if (resultado[y] == 'V') {
      vitoria++;
    }
  }

  // Determina o grupo
  if (vitoria >= 5) {
    printf("Parabéns, você está no grupo 1\n");

  } else if (vitoria >=3) {
    printf("Parabéns, você está no grupo 2\n");

  } else if (vitoria >=1) {
    printf("Parabéns, você está no grupo 3\n");

  } else {
    printf("Sinto muito, você não entrou para nenhum grupo -1\n");
  }

  return 0;
}

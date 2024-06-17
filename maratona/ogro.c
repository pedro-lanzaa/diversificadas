#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Definir a variável do numero inteiro N
  int N;
  printf ("Ajude o Ogro a contar!\nDigite um número entre 0 e 10\n");
  scanf("%d", &N);

  // Mão esquerda 
  for (int i = 0; i < N && i < 5; i++) {
    printf("I");
  }
  for (int i = N; i < 5; i++) {
    printf("*");
  }
  printf("\n");

  // Mão direita
  if (N > 5) {
    for (int i = 0; i < N - 5; i++) {
      printf("I");
    }
  } else {
    printf("*");
  }

  return 0;
}

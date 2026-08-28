#include <stdio.h>
#include <stdlib.h>

// Desvio condiciona Se, Senao Se, Senao
int compare(int a, int b) {
  if (a > b) {
    return 1;
  } else if (a < b) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int result1 = compare(2, 1);
  int result2 = compare(2, 3);
  int result3 = compare(1, 1);

  printf("Resultado do compare 1: %d", result1);
  printf("\nfResultado do compare 2: %d", result2);
  printf("\nResultado do compare 3: %d", result3);
}

#include <stdio.h>
#include <stdlib.h>

// RECURSAO
// Caso ocorra o caso Base  RETORNO
int mdc(int a, int b) {

  // CASO BASE
  if (b == 0) {
    return a;
  }

  return (b, a % b);
}

int main() { printf("%d", mdc(10, 20)); }

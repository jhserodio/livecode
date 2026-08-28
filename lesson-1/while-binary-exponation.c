#include <stdio.h>
#include <stdlib.h>

// COMPLEXIDADE ALGORITMICA, linear, logaritmica.
long long fast_pow(long long base, int exp) {
  long long result = 1;

  while (exp > 0) {
    if (exp % 2 == 1) {
      // se impar -> result = result * base
      result *= base;
    }
    // base = base * base;
    base *= base;
    // exp = exp / 2;
    exp /= 2;
  }

  return result;
}

int main() {
  long long resultado = fast_pow(20, 4);

  printf("%lld", resultado);
}

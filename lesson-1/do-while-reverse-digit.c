#include <stdio.h>
#include <stdlib.h>

// IMPERATIVA
void extract_digits(int n) {
  long long num = llabs((long long)n);

  do {
    int digit = num % 10;
    printf("%d\n", digit);
    num /= 10;
  } while (num > 0);
}

int main() { extract_digits(1234); }

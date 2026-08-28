#include <stdio.h>
#include <stdlib.h>

// Switch/ Case
int calculate(char op, int a, int b) {
  switch (op) {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    return a / b;
  default:
    return 0;
  }
}

int main() {
  int pls = calculate('+', 23, 32);
  int mns = calculate('-', 10, 4);
  int mlt = calculate('*', 2, 2);
  int dv = calculate('/', 10, 2);

  printf("%d", pls);
  printf("\n");

  printf("%d", mns);
  printf("\n");

  printf("%d", mlt);
  printf("\n");

  printf("%d", dv);
  printf("\n");
}

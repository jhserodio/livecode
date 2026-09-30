#include <stdio.h>
#include <stdlib.h>

unsigned long long fibo(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  unsigned long long prev = 0;
  unsigned long long curr = 1;
  unsigned long long next;

  for (int i = 2; i <= n; i++) {
    next = prev + curr;
    prev = curr;
    curr = next;
  }

  return curr;
}

int main() {
  printf("%ulld", fibo(12));

  return 0;
}

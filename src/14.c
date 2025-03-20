#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 5;
  int y = 10;
  int result = multiply(x, y);
  printf("The result is %d", result);
  return 0;
}

int multiply(int x, int y) {
  return x * y;
}

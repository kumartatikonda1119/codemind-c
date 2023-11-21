
#include <stdio.h>

int main() {
  int n, i, a, b;

  
  scanf("%d", &n);

  a = 0;
  b = 1;

  for (i = 0; i < n; i++) {
    printf("%d ", a);

    int temp = a;
    a = b;
    b = temp + b;
  }

  return 0;
}
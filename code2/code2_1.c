#include <stdio.h>

int add(int a, int b) {
   printf("计算 %d + %d", a, b);
   return a + b;
}

int main() {
   add(1, 2);
   add(3, 2);
   return 0;
}

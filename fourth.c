#include <stdio.h>
int main() {
   for (int j = 1; j < 10; j = j + 1) {
     for (int i = 1; i <= j; i++) {
        printf("%d * %d = %d   ", i, j, i * j);
     }
      printf("\n");
   }
   return 0;
}

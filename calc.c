#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   char *s1 = *(argv + 1);
   char *op = *(argv + 2);
   char *s2 = *(argv + 3);
   int a = atoi(s1);
   int b = atoi(s2);
   if (*op == '+') {
      printf("%d + %d = %d\n", a, b, a + b);
   }
   if (*op == '-') {
      printf("%d - %d = %d\n", a, b, a - b);
   }
   if (*op == '*') {
      printf("%d * %d = %d\n", a, b, a * b);
   }
   if (*op == '/') {
      printf("%d / %d = %d\n", a, b, a / b);
   }
   return 0;
}

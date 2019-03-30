#include "cal.h"
#include <stdio.h>

int main() {
   int sum = add(1, 1);
   if (2 == sum) {
       printf("OK\n");
   } else {
       printf("测试不通过\n");
   }

   int q = div(1, 2);
   if (q < 0.5) {
      printf("测试不通过\n");    
   }
   return 0;
}

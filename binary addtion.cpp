#include <stdio.h>

int main() {
   long n1, n2;
   int i = 0,c = 0, sum[20];

   printf("Enter the first binary number: ");
   scanf("%ld", &n1);
   printf("Enter the second binary number: ");
   scanf("%ld", &n2);

   while (n1 != 0 || n2 != 0) {
      sum[i++] = (int)((n1 % 10 + n2 % 10 +c) % 2);
      c = (int)((n1 % 10 + n2 % 10 + c) / 2);
      n1 = n1 / 10;
     n2 = n2 / 10;
   }

   if (c!= 0) {
      sum[i++] = c;
   }

   --i;

   printf("Sum of two binary numbers: ");
   while (i >= 0) {
      printf("%d", sum[i--]);
   }

   return 0;
}


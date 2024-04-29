#include <stdio.h>

int euclidean(int a, int b) {
   while (b != 0) {
      int r=a%b;
      a=b;
      b=r;
   }
   
   return a;
}

int main() {
   int x, y, result;
   
   printf("Enter two integers: ");
   scanf("%d %d", &x, &y);
   
   result = euclidean(x, y);
   
   printf("GCD(%d,%d)=%d", x, y, result);
   
   return 0;
}


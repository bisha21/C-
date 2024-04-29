#include <stdio.h>

void extended_euclidean(int a, int b, int *x, int *y, int *gcd) {
    int x0 = 1, y0 = 0, x1 = 0, y1 = 1;
    int q, r, xn, yn;

    while (a != 0) {
        q = b / a;
        r = b % a;

        xn = x0 - q * x1;
        yn = y0 - q * y1;

        x0 = x1;
        y0 = y1;
        x1 = xn;
        y1 = yn;

        b = a;
        a = r;
    }

    *x = x0;
    *y = y0;
    *gcd = b;
}

int main() {
    int a, b, x, y, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    extended_euclidean(a, b, &x, &y, &gcd);

    printf("Extended Euclidean algorithm:\n");
    printf("gcd(%d, %d) = %d\n", a, b, gcd);
    printf("%d * %d + %d * %d = %d\n", a, x, b, y, gcd);

    return 0;
}


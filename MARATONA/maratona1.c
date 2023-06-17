#include <stdio.h>

void divisivel_por_7(int n) {
    if (n == 0 || n == 7) {
        printf("%d\n", n);
        return;
    }
    int r = n % 10;
    printf("%d\n",n);
    divisivel_por_7((n / 10) * 3 + r);
}

int main() {
    int x;
    scanf("%d", &x);
    divisivel_por_7((x / 10) * 3 + (x % 10));
    return 0;
}
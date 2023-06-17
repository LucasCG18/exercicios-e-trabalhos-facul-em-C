#include <stdio.h>

void divisivel_por_7(long long int n) {
    printf("%lld\n", n);
    if (n <= 7) {
        return;
    }
    long long int next_number = (n / 10) * 3 + n % 10;
    divisivel_por_7(next_number);
}

int main() {
    long long int x;
    scanf("%lld", &x);
    divisivel_por_7(x);
    return 0;
}
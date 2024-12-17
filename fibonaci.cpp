#include <stdio.h>

int main() {
    int n, i;
    long long fib1 = 0, fib2 = 1, fibNext;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong!\n");
        return 0;
    }
    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", fib1); 
        } else if (i == 2) {
            printf("%lld ", fib2);
        } else {
            fibNext = fib1 + fib2;
            printf("%lld ", fibNext);
            fib1 = fib2;
            fib2 = fibNext;
        }
    }
    return 0;
}

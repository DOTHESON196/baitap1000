#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (2 * i);
    }
    printf("Tổng của các số từ 1/2 + 1/4 + ... + 1/(2*%d) là: %.2f\n", n, sum);
    return 0;
}

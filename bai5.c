#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n + 1; i += 2) {
        sum += 1.0 / i; 
    }
    printf("Tổng của các số từ 1 + 1/3 + 1/5 + ... + 1/(2*%d+1) là: %.2f\n", n, sum);
    return 0;
}

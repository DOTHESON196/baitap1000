#include <stdio.h>
int main() {
    int n, sum = 0; 
    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n); 
    for (int i = 1; i <= n; ++i) {
        sum += i;
    } 
    printf("Tổng của các số từ 1 đến %d là: %d\n", n, sum);
    return 0;
}
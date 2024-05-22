#include <stdio.h>
int main() {
    int n, sum = 0;  
    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n); 
    for (int i = 1; i <= n; ++i) {
        sum += i * i; 
    } 
    printf("Tổng của các số từ 1^2 đến %d^2 là: %d\n", n, sum); 
    return 0;
}

#include <stdio.h>
double T(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    double T_prev1 = x, T_prev2 = 1, T_current;
    for (int i = 2; i <= n; i++) {
        T_current = 2 * x * T_prev1 - T_prev2;
        T_prev2 = T_prev1;
        T_prev1 = T_current;
    }
    return T_current;
}

int main() {
    double x;
    int n;
    printf("Nhập giá trị x: ");
    scanf("%lf", &x);
    printf("Nhập giá trị n: ");
    scanf("%d", &n);
    printf("T(%lf, %d) = %lf\n", x, n, T(x, n));
    return 0;
}

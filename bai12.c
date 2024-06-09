#include <stdio.h>
#include <math.h>

double S(double x, int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }
    return sum;
}

int main() {
    double x;
    int n;
    printf("Nhập giá trị x: ");
    scanf("%lf", &x);
    printf("Nhập giá trị n: ");
    scanf("%d", &n);
    printf("S(%lf, %d) = %lf\n", x, n, S(x, n));
    return 0;
}

#include <stdio.h>


double S(int n) {
    double sum = 1.0; 
    double term = 1.0;
    
    for (int i = 2; i <= n; i++) {
        term /= i;  
        sum += term;
    }
    
    return sum;
}

int main() {
    int n;

    printf("Nhập giá trị n: ");
    scanf("%d", &n);

    printf("S(%d) = %lf\n", n, S(n));
    return 0;
}

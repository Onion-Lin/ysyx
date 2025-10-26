#include <stdio.h>

double compute_sum(int n) {
    double term1 = 1.0;   // i!
    double term2 = 1.0;   // ∏(2*i + 1)
    double total = 0.0;
    int i;

    for (i = 1; i <= n; i++) {
        term1 *= i;
        term2 *= (2 * i + 1);
        total += term1 / term2;  // 现在是 double / double = 正确小数
    }

    return total + 1.0;  // 加上第一项（i=0 时为 1）
}

int main() {
    int n;
    printf("请输入 n: ");
    scanf("%d", &n);

    double result = compute_sum(n);
    printf("s = %.10f\n", result);

    return 0;
}
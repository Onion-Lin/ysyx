#include <stdio.h>

// 递推公式的实现
int josephus(int n) {
    int result = 0;  // 当只有1个人时，位置是0（从0开始编号）
    int i;
    // 从2个人开始，逐步推导到n个人
    for (i = 2; i <= n; i++) {
        result = (result + 3) % i;  // 递推公式：J(i) = (J(i-1) + k) % i
    }
    
    return result + 1;  // 转换为从1开始的编号
}

// 带详细解释的递推过程演示
void demonstrate_josephus(int n) {
    printf("约瑟夫环递推过程演示 (n=%d, k=3):\n", n);
    
    int result = 0;
    printf("f(1) = 0 (只有1人时，位置为0)\n");
    int i;
    for (int i = 2; i <= n; i++) {
        int old_result = result;
        result = (result + 3) % i;
        printf("f(%d) = (f(%d) + 3) mod %d = (%d + 3) mod %d = %d\n", 
               i, i-1, i, old_result, i, result);
    }
    
    printf("最终位置(从0开始): %d, 最终位置(从1开始): %d\n", result, result + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    // 演示递推过程
    demonstrate_josephus(n);
    
    // 输出结果
    printf("\n最终答案: %d\n", josephus(n));
    
    return 0;
}




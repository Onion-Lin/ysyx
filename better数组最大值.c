#include <stdio.h>

int main(void) {
    /*********Begin*********/
    int m, n;
    printf("Input m, n:");
    scanf("%d,%d", &m, &n);  // m: 行数, n: 列数

    int arr[m][n];  

    printf("Input %d*%d array:\n", m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int max_row = 0;
    int max_col = 0;

    // 遍历整个数组,找出最大值
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max) {  
                max = arr[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    printf("max=%d, row=%d, col=%d", max, max_row + 1, max_col + 1);
    /*********End**********/
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int n,ch;
    scanf("%d", &n);
    ch=getchar(); // 消耗换行符
    
    for(int i = 0; i < n; i++)
    {
        /*********Begin*********/
        char str[1000];
        fgets(str, sizeof(str), stdin);
        
        int count = 0;
        int len = strlen(str);
        
        // 统计数字字符的个数
        for(int j = 0; j < len; j++) {
            if(str[j] >= '0' && str[j] <= '9') {
                count++;
            }
        }
        
        printf("%d\n", count);
        
        /*********End**********/
    }
    
    return 0;
}




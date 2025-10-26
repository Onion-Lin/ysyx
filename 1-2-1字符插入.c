#include <stdio.h>
#include <string.h>
int main(void)
{
    
/*
你的代码 正确实现
--------- ---------
a[i]=a[i+1] 删除操作 a[i+1]=a[i] 移动操作
a[k]=max 替换操作 a[min_pos+1]=max_char 插入操作
每次循环重置min 只初始化一次min_pos
混淆索引和值的概念 明确区分最大值和位置

你原来的代码实际上是在执行"删除后替换"，而不是"插入"操作。
*/
    
    /*********Begin*********/
    char a[100],b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    int i,j,k;
    int max=b[0];
    for(j=0;b[j]!='\0';j++){
        if(b[j]>=max){
            max=b[j];
            k=j;
        }
    };
        //printf("%s",b[k]);
    for(i=0;a[i]!='\0';i++){
        int min=a[0];
        if(a[i]<=min){
            min=a[i];
            j=i;
        }
    }
        //printf("%s",a[i]);
    for (i=k+1; a[i]!='\0'; i++) {
        a[i]=a[i+1];
    }
    a[k]=max;
        //printf("%s\n",a[k]);
    printf("%s",a);
    /*********End**********/
    return 0;
}
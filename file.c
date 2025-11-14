#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //定义变量存储读进来的量
    int length = 4,index = 0;
    int (*suc)[3] = malloc(length * sizeof(*suc));

    //打开文件并读取数据
    FILE* source = fopen ("C:\\Users\\32416\\Desktop\\file.txt","r");
    int i=0;
    while ( fscanf ( source , "%d%d%d" , &suc[index][0] , &suc[index][1] , &suc[index][2] ) == 3 ){
        if ( index == (length - 1) ){
           length *= 2;
           suc = realloc(suc,length*sizeof(*suc));
           if ( suc == NULL){
            printf ("Error!\n");
            return -1;
           }
        }
        //判断值是否正确,若发现错误则改正
        if ( suc[index][0] + suc[index][1] != suc[index][2] ){
            printf ("error calculation : line %d\n",(int)index);
            suc[index][2] = suc[index][0] + suc[index][1];
        }
        index++;
    }
    fclose (source);
    printf ("Changing~~~\n");


    //将数组写回去
    FILE* source2 = fopen ("C:\\Users\\32416\\Desktop\\file.txt","w");
    for (int i = 0;i<(index);i++){
        fprintf (source2,"%d %d %d\n",suc[i][0],suc[i][1],suc[i][2]);
    }

    //关闭文档，释放内存
    free (suc);
    fclose (source2);
    printf ("Changed\n");

    return 0;

}
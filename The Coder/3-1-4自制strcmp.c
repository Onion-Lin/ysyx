#include<stdio.h>
int strcmp(char *p1,char *p2){
	/*********Begin*********
    int a1=0,a2=0;
    int i;
    for (i=0;p1[i]!=\0;i++){
        a1 += (int)p1[i];
    }
     for (i=0;p2[i]!=\0;i++){
        a2 += (int)p2[i];
    }
    if (a1>a2){
        return 1;
    }else{
        return -1;
    }
	*********End**********/

     int i = 0;
    
    // 逐字符比较，直到遇到不同字符或字符串结束符
    while (p1[i] != '\0' && p2[i] != '\0') {
        if (p1[i] > p2[i]) {
            return 1;   // p1 > p2
        } else if (p1[i] < p2[i]) {
            return -1;  // p1 < p2
        }
        i++;
    }
    
    // 如果一个字符串是另一个的前缀，较短的字符串较小
    if (p1[i] == '\0' && p2[i] == '\0') {
        return 0;   // 两字符串相等
    } else if (p1[i] == '\0') {
        return -1;  // p1 较短，所以 p1 < p2
    } else {
        return 1;   // p2 较短，所以 p1 > p2
    }
    /*********End**********/
}
int main(void)
{
	char a[110],b[110];
	scanf("%s%s",a,b);
	if(strcmp(a,b)>0)
		printf("%s", a);
	else
		printf("%s", b);


    return 0;
}
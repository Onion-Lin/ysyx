#include <stdio.h>

void swap(int* pa,int* pb);
int main(){
    int a=5,b=6;
    swap(&a,&b);
    printf ("a=%d\n",*a);
    printf ("b=%d",b);
    return 0;
}

void swap(int* pa,int* pb){
    int tmp;
    tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}
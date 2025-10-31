#include <stdio.h>

void swap(int* pa,int* pb);
int main(){
    int a=5,b=6;
    int* p=&a;
    swap(&a,&b);
    printf ("a=%d\n",*p);
    printf ("b=%d",b);
    return 0;
}

void swap(int* pa,int* pb){
    int tmp;
    tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}
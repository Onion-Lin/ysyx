#include <stdio.h> 

int main(){ 
int i,a = 0;
int j=0;
int k=0;
    for (a=200;a<=3000;a++){
        i=a;
        k=0;
        j=0;
        //printf ("a=%d,i=%d,",a,i);
        while (i != 0){
            j = i % 10;
            //printf ("j = %d",j);
            i = i/10;
            k = k*10 + j;
        	//printf ("%d\n",k); 
		}
        //printf ("result=%d\n",k);
		if (a==k){
            printf("%d\n",a);
        }
    }
}
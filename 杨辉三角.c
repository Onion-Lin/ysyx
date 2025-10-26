#include<stdio.h>
int main(void)
{
    /*********Begin*********/           
printf("1\n");      //
printf("1 1\n");
int tra[10][10];
tra[0][0]=1;
tra[1][0]=1;
tra[1][1]=1;
int i,j;      //从i等于二，即第三行，k=0，k++，
for (i=2;i<10;i++){
    tra[i][0]=1;
    tra[i][i]=1;
    for (j=1;j<i;j++){
        tra[i][j]=tra[i-1][j]+tra[i-1][j-1];
    }
}
for (i=2;i<10;i++){
    for (j=0;j<=i;j++){
        if(j!=i){
            printf("%d ",tra[i][j]);
        }else{
            printf("%d\n",tra[i][j]);
        }
    }
}
    /*********End**********/
    return 0;
}
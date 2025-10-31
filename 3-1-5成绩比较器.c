#include<stdio.h>
/*********Begin*********/
int newstar(int great[],int n){
    int tmp=great[1];
    int i;
    for (i=0;i<n;i++){
        if (great[i]>=tmp){
            tmp=great[i];
        }
    }
    return tmp;
}

/*********End**********/
int main(void)
{
    int n,s[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    int ans;
	/*********Begin*********/
    ans=newstar(s,n);
	/*********End**********/
    printf("%d",ans );
    return 0;
}
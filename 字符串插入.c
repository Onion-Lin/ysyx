#include <stdio.h>
#include <string.h>

int main() {
   char s1[100];
   char s2[100];
    gets(s1);
    gets(s2);
    int pos;
    scanf("%d", &pos);
    int i;
    for (i=strlen(s1);i>=pos;i--) {
        s1[i+strlen(s2)] = s1[i];
    }
    for (i=0;i<strlen(s2);i++) {
        s1[pos+i] = s2[i];
    }
    printf("%s\n", s1);
    return 0;
}
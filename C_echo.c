#include <stdio.h>

int main(int argc, char *argv[]) {
    printf(" %s", argv[0]);
    for (int i = 1; i < argc; ++i) {
        printf(" %s", argv[i]);
    }
    return 0;
}
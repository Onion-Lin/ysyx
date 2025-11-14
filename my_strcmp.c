#include <string.h>

char **my_strcmp(char *str1, char *str2) {
    int result = strcmp(str1, str2);
    
    if (result < 0) {
        return &str1;
    } else if (result > 0) {
        return &str2;
    } else {
        return NULL;
    }
}
char **my_strcmp(char *str1, char *str2, int max_chars, int return_larger) {
    int i = 0;
    for (i = 0; i < max_chars && str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] < str2[i]) {
            if (return_larger) {
                return &str2;  
            } else {
                return &str1;  
            }
        } else if (str1[i] > str2[i]) {
            if (return_larger) {
                return &str1;   
            } else {
                return &str2;  
            }
        }
    }
    
    if (i == max_chars) {
        return NULL;  
    }
    
    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return NULL;
    } else if (str1[i] == '\0') {
        if (return_larger) {
            return &str2;  
        } else {
            return &str1;  
        }
    } else {
        if (return_larger) {
            return &str1;  
        } else {
            return &str2;  
        }
    }
}

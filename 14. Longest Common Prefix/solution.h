char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 0) 
    {
        char *n = "";
        return n;
    }
    int cont = 1;
    int length = 0;
    int max = strlen(strs[0]);
    
    for(int h = 0; h < strsSize; h++) {
        if(max < strlen(strs[h])) max = strlen(strs[h]);
    }
    
    for(int i = 0; i < max; i++) {
        for(int j = 0; j < strsSize; j++) {
             if(strs[0][i] != strs[j][i]) cont = 0;
        }
        if(cont == 0) break;
        else length++;
    }
    
    if(length == 0) 
    {
        char *m = "";
        return m;
    }
    
    char *p = malloc((length + 1) * sizeof(char));
    
    for(int k = 0; k < length; k++)
    {
      p[k] = strs[0][k];  
    }
    p[length] = '\0';
    return p;
}
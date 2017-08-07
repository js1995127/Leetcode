char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize == 0) return "";
    int i, j, length = 0;
    int max = strlen(strs[0]);
    
    for(i = 0; i < max; i++) {
        for(j = 0; j < strsSize; j++) {
             if(strs[0][i] != strs[j][i] || strs[j][i] == '\0') break;
        }
        if(j != strsSize) break;
        else length++;
    }
    
    char *p = malloc((length + 1) * sizeof(char));
    
    for(i = 0; i < length; i++)
    {
      p[i] = strs[0][i];  
    }
    p[length] = '\0';
    return p;
}
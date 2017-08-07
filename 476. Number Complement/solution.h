int findComplement(int num) {
    int i = 2;
    int numCopy = num;
    
    while(numCopy > 1) {
        numCopy /= 2;
        i *= 2;
    }
    
    return i - 1 - num ;
}
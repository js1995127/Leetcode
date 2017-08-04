bool isPalindrome(int x) {
    if (x < 0) return false;
    
    int division = 1;
    
    while (x / division >= 10) {
        division *= 10;
    }
    
    while(division >= 10) {
        if (x % 10 != x / division) return false;
        x = (x % division) / 10;
        division /= 100;
    }
    
    return true;
}
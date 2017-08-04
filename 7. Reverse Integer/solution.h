#define INT_MAX 2147483647

int reverse(int x) {
    double y = 0;
    int negative = 0;
    
    if(x < 0) {
        negative = 1;
        x = -x;
    }
    
    while (x > 0) {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    
    if(y > INT_MAX) {
        return 0;
    }
    
    if (negative == 1) y = -y;
    
    return y;
}
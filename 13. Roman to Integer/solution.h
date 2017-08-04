int romanToInt(char* s) {
    int i = 0;
    int sum = 0;
    int length = strlen(s);

    while(i < length) {
        if(s[i] == 'M') sum = sum + 1000;
        
        if(s[i] == 'D') {
            if(s[i+1] == 'M') sum -= 500;
            else sum +=500;
        }
        
        if(s[i] == 'C') {
            if(s[i+1] == 'M' || s[i+1] == 'D') sum -= 100;
            else sum +=100;
        }
        
        if(s[i] == 'L') {
            if(s[i+1] == 'M' || s[i+1] == 'D' || s[i+1] == 'C') sum -= 50;
            else sum +=50;
        }
        
        if(s[i] == 'X') {
            if(s[i+1] == 'M' || s[i+1] == 'D' || s[i+1] == 'C' || s[i+1] == 'L') sum -= 10;
            else sum +=10;
        }
        
        if(s[i] == 'V') {
            if(s[i+1] == 'M' || s[i+1] == 'D' || s[i+1] == 'C' || s[i+1] == 'L' || s[i+1] == 'X') sum -= 5;
            else sum +=5;
        }
        
        if(s[i] == 'I') {
            if(s[i+1] == 'M' || s[i+1] == 'D' || s[i+1] == 'C' || s[i+1] == 'L' || s[i+1] == 'X' || s[i+1] == 'V') sum -= 1;
            else sum += 1;
        }
       
        i++;
    }

    return sum;
}
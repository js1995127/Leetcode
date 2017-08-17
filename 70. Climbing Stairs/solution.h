int climbStairs(int n) {
    int temp;
    int step[2] = {1,2};
    if(n == 1) return 1;
    if(n == 2) return 2;
    for (int i = 1; i<n; i++) {
        temp = step[1];
        step[1] = step[1] + step[0];
        step[0] = temp;
    }
    return step[0];
}
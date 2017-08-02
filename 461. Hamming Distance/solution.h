// int hammingDistance(int x, int y) {
//     if(x < y) {
//         int z = x;
//         x = y;
//         y = z;        
//     }    

//     int dis = 0;
//     for(int i = 0; x != 0; ) {
//         if(x % 2 != y % 2) {
//             dis++;
//         }
//         x = x / 2;
//         y = y / 2;
//     }
//     return dis;
// }
int hammingDistance(int x, int y) {
    int m = x ^ y;
    int dis = 0;

    while(m) {
        dis += m & 1;
        m >>= 1;
    }
    return dis;
}
int maxSubArray(int* nums, int numsSize) {
    int i;
    int max = INT_MIN;
    int sum = 0;

    for(i = 0; i < numsSize; i++) {
        sum += nums[i];
        if(sum < 0) {
            sum = 0;
            max = nums[i] > max? nums[i] : max;
        } else {
            max = sum > max ? sum : max;
        }
    }
    return max;
}
int removeDuplicates(int* nums, int numsSize) {
    int idx = 0;
    int len = 0;
    
    
    for(int i = 0; i < numsSize - 1; i++){
        if (nums[i] != nums[i + 1]){
            nums[idx++] = nums[i];
            len++;
        }
    }
      
    if(numsSize != 0) {
        len++;
        nums[len - 1] = nums[numsSize - 1];
    }

    
    return len;
}
int removeElement(int* nums, int numsSize, int val) {
    int k;
    int same = 0;
    
      for(int i = 0; i < numsSize; i++) {
        if(nums[i] == val) same++;
    }
    
     for(int i = numsSize; i >= 0; i--) {
        if(nums[i] == val) {
            for(int j = i; j < numsSize; j++) {   
                nums[j] = nums[j + 1];         
            }
        }
    }
    return numsSize - same;
}
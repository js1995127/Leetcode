int* twoSum(int* nums, int numsSize, int target) 
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[j] == target - nums[i])
            {
                int *p = malloc(2 * sizeof(int));
                *p = i;
                *(p + 1) = j;
                return p;
            } 
        }
    }
    return 0;    
}
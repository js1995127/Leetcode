#include <stdio.h>
#include <stdlib.h>
#include "solution.h"

void case_begin(int case_num)
{   
    printf("    Case %d begin\n", case_num);
}

void case_end(int case_num)
{   
    printf("    Case %d end\n", case_num);
}

void print_output()
{
    printf("        Output: ");
}

void print_expect()
{
    printf("        Expect: ");
}

int main()
{
    printf("Test for twoSum\n");
    printf("Test begin\n");

    int case_num;

    case_num = 1;
    case_begin(case_num);
    {
        int nums[4] = {2,7,11,15};
        int numsSize = 4;
        int target = 9;
        int *p;
        p = twoSum((int *)nums, numsSize, target);

        print_output();
        printf("[%d,%d]\n", *p,*(p+1));
        print_expect();
        printf("[0,1]\n");
    }
    case_end(case_num);
    
    printf("Test end\n");
    return 0;
}
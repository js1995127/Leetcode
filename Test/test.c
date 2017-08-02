#include <stdio.h>
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
    printf("Test for {function}\n");
    printf("Test begin\n");

    int case_num;

    case_num = {case_num};
    case_begin(case_num);
    {
        print_output();
        printf("%{format}\n", {function});
        print_expect();
        printf("{expect result}\n");
    }
    case_end(case_num);
    
    printf("Test end\n");
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
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
    printf("Test for isPalindrome\n");
    printf("Test begin\n");

    int case_num;

    case_num = 1;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", isPalindrome(-131));
        print_expect();
        printf("0\n");
    }
    case_end(case_num);
    
     case_num = 2;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", isPalindrome(12321));
        print_expect();
        printf("1\n");
    }
    case_end(case_num);
    
     case_num = 1;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", isPalindrome(232));
        print_expect();
        printf("1\n");
    }
    case_end(case_num);
    
    printf("Test end\n");
    return 0;
}
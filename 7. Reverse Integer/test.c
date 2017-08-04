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
    printf("Test for reverse\n");
    printf("Test begin\n");

    int case_num;

    case_num = 1;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", reverse(123));
        print_expect();
        printf("321\n");
    }
    case_end(case_num);

    case_num = 2;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", reverse(-1279));
        print_expect();
        printf("-9721\n");
    }
    case_end(case_num);

    case_num = 3;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", reverse(1000000009));
        print_expect();
        printf("0\n");
    }
    case_end(case_num);

    
    case_num = 4;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", reverse(0));
        print_expect();
        printf("0\n");
    }
    case_end(case_num);

    case_num = 5;
    case_begin(case_num);
    {
        print_output();
        printf("%d\n", reverse(3709700));
        print_expect();
        printf("79073\n");
    }
    case_end(case_num);
    
    printf("Test end\n");
    return 0;
}
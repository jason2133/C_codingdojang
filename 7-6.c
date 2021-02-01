#include <stdio.h>
#include <limits.h>

int main()
{
    // 최솟값
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d %d %d %ld %lld \n", num1, num2, num3, num4, num5);

    return 0;
}



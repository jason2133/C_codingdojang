#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("j:%d ", j);
        }

        printf("i:%d\\n", i);
        printf("\n");
    }

    return 0;
}

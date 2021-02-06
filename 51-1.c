#include <stdio.h>

struct PacketHeader {
    char flags;
    int seq;
};

int main()
{
    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));
    printf("%d\n", sizeof(header.seq));
    printf("%d\n", sizeof(header));
    printf("%d\n", sizeof(struct PacketHeader));

    return 0;
}



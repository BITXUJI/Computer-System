#include "stdio.h"
#include "limits.h"
#include "stdint.h"
int main(int argc, char const *argv[])
{
    printf("%x\n", INT_MAX);
    printf("%x\n", INT_MIN);
    printf("%x\n", UINT_MAX);
    int32_t a = -78;
    uint64_t b = 1000;
    printf("x=%" PRId32 ",y=%" PRIu64 "\n", a, b);
    return 0;
}

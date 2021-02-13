
#include <stdint.h>
#include <limits.h>
int uadd_ok(unsigned x, unsigned y)
{
    unsigned z = x + y;
    if (z >= x)
        return 1;
    else
        return 0;
}

int tadd_ok(int x, int y)
{
    int s = x + y;
    if ((x > 0 && y > 0 && s <= 0) || (x < 0 && y < 0 && s >= 0))
        return 0;
    else
        return 1;
}

int tsub_ok(int x, int y)
{
    if (y == INT_MIN)
        return tadd_ok(x, INT_MIN);
    else
        return tadd_ok(x, -y);
}
/* Determine whether arguments can be multiplied without overflow*/
int tmult_ok(int x, int y)
{
    int64_t pll = (int64_t)x * y;
    return pll == (int)pll;
}

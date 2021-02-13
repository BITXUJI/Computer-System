#include <stdio.h>
float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;
    for (i = 0; i < length; i++)
    {
        result += a[i];
    }
    return result;
}
int main(int argc, char const *argv[])
{
    float a[2] = {1.0, 2.0};
    float b = sum_elements(a, 0);
    printf("%f\n", b);
    return 0;
}

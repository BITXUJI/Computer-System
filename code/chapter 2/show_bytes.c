#include <stdio.h>
#include <string.h>
#include <stdint.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (size_t i = 0; i < len; i++)
    {
        printf("%.2x", start[i]);
    }
    printf("\n");
}
void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}
void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}
void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

int main()
{
    show_int(4);
    show_float(4.0);
    int a = 5;
    int *p = &a;
    show_pointer(p);
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
}
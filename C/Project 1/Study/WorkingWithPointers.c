#include <stdio.h>
/*2026.03.07 Работа с указателями*/
int main(void)
{
    int x = 4;
    int *x_ptr = &x;

    printf("Value x: %d\n", x); //%d
    printf("Value *x_ptr: %d\n", *x_ptr);
    printf("Value &x: %p\n", &x);
    printf("Value x_ptr: %p\n", x_ptr);
    printf("Value &x_ptr: %p\n", &x_ptr);
    printf("Sizeof (x): %lu\n", sizeof(x));
    printf("Sizeof (x_ptr): %lu\n", sizeof(x_ptr));

    return 0;
}

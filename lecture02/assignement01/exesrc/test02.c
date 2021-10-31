#include <stdio.h>
#include <cmplx.h>

int main(void) {
    cmplx_t a = {1, 2};
    cmplx_t b = {3, 4};
    cmplx_t c = {0, 0};

    cmplx_mul(a, b, c);

    printf("%f + i%f\n", c[0], c[1]);

    return 0;
}
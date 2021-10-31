#include <stdio.h>
#include <cmplx.h>

int main() {
    cmplx_t a = {1, 2};
    cmplx_t b = {3, 4};
    cmplx_t c = {0, 0};

    cmplx_div(a, b, c);

    printf("%.2f + i%.2f\n", c[0], c[1]);
}
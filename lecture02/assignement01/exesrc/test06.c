#include <stdio.h>
#include <cmplx.h>

int main(void) {
    cmplx_t a = {1,1};

    printf("%.2lf\n", cmplx_imag(cmplx_mag(a), cmplx_phs(a)));

    return 0;
}
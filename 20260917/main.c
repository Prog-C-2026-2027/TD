#include <stdio.h>

int main(void)
{
    // display 0.3 with 20 digits after decimal point
    // the \n => go to next line after display
    // 0.3 => 0.29999999999999998890
    // (0.1+0.2) => 0.30000000000000004441
    // 0.3 is not equal to (0.1+0.2)
    // check with |0.3 - (0.1+0.2)| < epsilon for real values
    printf("%.20f\n", (0.1+0.2)); // 0.3, or (0.1+0.2)
    return 0;
}

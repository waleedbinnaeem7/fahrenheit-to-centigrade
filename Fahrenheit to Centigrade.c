#include <stdio.h>

float to_faran(float c) {
    
    float f_h = (c * 9 / 5) + 32;
    return f_h;
}

int main() {
    float f_h;

    
    printf("Input temperature in fahrenheith: ");
    scanf("%f", &f_h);

    
    float c = to_faran(f_h);
    printf("%.2f fahrenheit is equal to %.2f celsius\n", f_h, c);

    return 0;
}

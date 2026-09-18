#include <stdio.h>

int bitcount(unsigned x) {
    int b = 0;
    
    for (; x != 0; x >>= 1)
        if (x & 01)
            b++;
            
    return b;
}

int main() {
    unsigned int value;
    
    printf("Enter an unsigned integer:");
    scanf("%u", &value);
    
    int count = bitcount(value);
    printf("Number of 1-bits in %u (0x%X): %d\n", value, value, count);
    
    return 0;
}
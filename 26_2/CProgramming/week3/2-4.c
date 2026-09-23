#include <stdio.h>

unsigned long int next = 1;

int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

void srand(unsigned int seed) {
    next = seed;
}

int main() {
    unsigned int seed;
    int i;
    
    printf("Enter a seed value:");
    scanf("%u", &seed);
    
    srand(seed);
    
    printf("Generate pseudo-random numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", rand());
    }
    printf("\n");
    
    return 0;
}
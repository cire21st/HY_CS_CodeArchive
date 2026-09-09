#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

//print Fahrenheit-Celsius table for fahr = 0, 20 .... 300
int main(void){

    int fahr = LOWER, cels = LOWER;

    while(fahr <= UPPER){

        cels = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr += STEP;
    }
    return 0;
}
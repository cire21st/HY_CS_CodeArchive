#include <stdio.h>

int main()
{
    int sum=0;
    
    for (int i=1; i<=100; i++) {
        sum=sum+i;
        if (sum>50) {
            printf("The sum from 1 to %d is %d.\n", i, sum);
            break;
        }
    }
    
    return 0;
}
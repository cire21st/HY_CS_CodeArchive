#include <stdio.h>

int main()
{
    int n, lineCnt;
    
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &n);
    
    if (n > 100) n=100;
    
    lineCnt = 0;
    
    do {
        if (lineCnt < 10) {
            lineCnt++;
        }
        else {
            printf("\n");
            lineCnt = 1;
        }
        printf("%3d ", n--);
    } while (n > 0);
    
    return 0;
}
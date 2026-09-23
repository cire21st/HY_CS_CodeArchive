#include <stdio.h>

int main()
{
    int ku;
    char cd = 'A';
    
    printf("Enter an integer: ");
    scanf("%d", &ku);
    
    if (ku !=100) {
        cd++;
        printf("cd: %c", cd);
    }
    else {
        printf("cd: %c", cd);
    }
    
    return 0;
}
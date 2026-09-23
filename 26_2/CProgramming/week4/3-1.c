#include <stdio.h>

int main()
{
    int i, a=10;
    
    printf("Enter value for i: ");
    scanf("%d", &i);
    
    if (i==3) {
        a++;
    }
    
    printf("Value of a after condition check: %d ", a);
    
    return 0;
}
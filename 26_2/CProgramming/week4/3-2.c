#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num>0)
        printf("%d is a positive number.\n", num);
    if (num<0)
        printf("%d is a negative number.\n", num);
    if (num==0)
        printf("It is 0.\n", num);
        
    return 0;
}
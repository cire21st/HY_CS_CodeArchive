#include <stdio.h>

int main()
{
    int age, fee;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age<=5) {
        fee=0;
    }
    else if (age<=12) {
        fee=1000;
    }
    else if (age <= 18) {
        fee=1500;
    }
    else if (age <= 60) {
        fee=3000;
    }
    else {
        fee = 0;
    }
    
    printf("The fee is: %d won\n", fee);
    
    return 0;
}
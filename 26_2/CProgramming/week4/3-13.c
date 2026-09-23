#include <stdio.h>

int main()
{
    int sum = 0;
    int input;
    
    while (1) {
        // Infinite loop since the condition is always true
        printf("Enter a positive number (-1 to quit): ");
        scanf("%d", &input);
        
        if (input == -1) { // Check if the user entered -1
            break;
        }
        if (input < 0) {
            // If a negative number is entered
            printf("Negative numbers are ignored.\n");
            continue;
            // Skip to the next iteration
        }
        
        sum += input;
        // Add only positive numbers
    }
    
    printf("The total sum of positive numbers entered is %d.\n", sum);
    
    return 0;
}
#include <stdio.h>

int main()
{
    char first, second; // Variables to store the first (E/I) and second (N/S) letters of MBTI
    
    printf("Enter the first and second letters of your MBTI (e.g., E/I, N/S): ");
    scanf(" %c %c", &first, &second);
    
    // Output based on whether the first letter is 'E' (Extrovert) or 'I' (Introvert)
    if (first == 'E') {
        printf("You have an extroverted personality.\n");
        if (second == 'S') {
            printf("You are sensing type.\n");
        }
        else if (second == 'N') {
            printf("You are intuitive type.\n");
        }
    }
    else if (first == 'I') {
        printf("You have an introverted personality.\n");
        if (second == 'S') {
            printf("You are sensing type.\n");
        }
        else if (second == 'N') {
            printf("You are intuitive type.\n");
        }
    }

    char third, fourth; // Variables to store the third (T/F) and fourth (J/P) letters of MBTI
    
    printf("Enter the third and fourth letters of your MBTI (e.g., F/T, P/J): ");
    scanf(" %c %c", &third, &fourth);
    
    // Output based on whether the third letter is 'T' (Thinking) or 'F' (Feeling)
    if (third == 'T') {
        printf("You are a thinking type who judges logically and objectively.\n");
        if (fourth == 'J') {
            printf("You are a judging type.\n");
        }
        else if (fourth == 'P') {
            printf("You are a perceiving type.\n");
        }
    }
    else if (third == 'F') {
        printf("You are a feeling type who judges emotionally and people-centered.\n");
        if (fourth == 'J') {
            printf("You are a judging type.\n");
        }
        else if (fourth == 'P') {
            printf("You are a perceiving type.\n");
        }
    }
    
    return 0; // End of program
}
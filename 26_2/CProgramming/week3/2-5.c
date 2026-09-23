#include <stdio.h>

void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }
    
    printf("Enter a character to remove:");
    scanf(" %c", &ch);
    squeeze(str, ch);
    printf("Resulting string: %s\n", str);
    
    return 0;
}
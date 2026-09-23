#include <stdio.h>

void strcat(char s[], char t[]) {
    int i, j;
    i = j = 0;
    
    while (s[i] != '\0')
        i++;
        
    while ((s[i++] = t[j++]) != '\0');
}

int main() {
    char s[200];
    char t[100];
    int len_s = 0;
    int len_t = 0;
    
    printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter the second string: ");
    fgets(t, sizeof(t), stdin);
    
    while (s[len_s] != '\0') {
        if (s[len_s] == '\n') {
            s[len_s] = '\0';
            break;
        }
        len_s++;
    }
    
    while (t[len_t] != '\0') {
        if (t[len_t] == '\n') {
            t[len_t] = '\0';
            break;
        }
        len_t++;
    }
    
    strcat(s, t);
    printf("Concatenated string: %s\n", s);
    
    return 0;
}
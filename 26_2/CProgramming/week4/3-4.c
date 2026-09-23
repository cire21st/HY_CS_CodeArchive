#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    
    printf("Enter an alphabet character: ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        ch=(ch-'a'+3) % 26 + 'a';
    }
    else {
        ch=(ch-'A'+3) % 26 + 'A';
    }
    
    printf("Converted character: %c\n", ch);
    
    return 0;
}
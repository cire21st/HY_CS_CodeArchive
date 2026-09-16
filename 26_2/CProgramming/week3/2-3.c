#include <stdio.h>

int lower(int c){
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main(){
    char ch;

    printf("Enter single char: ");
    scanf("%c",&ch);

    char converted = lower(ch);
    printf("Converted: %c\n", converted);
    return 0;
}
#include <stdio.h>

int strLen(char s[]){
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

int main(void){
    char str[100];

    printf("Enter a String: ");
    fgets(str,sizeof(str), stdin);
    
    int len = strLen(str);
    if (str[len - 1] == '\n'){
        str[len - 1] = '\0';
        len--;
    }

    printf("Length of the entered string: %d\n", len);

    return 0;
}
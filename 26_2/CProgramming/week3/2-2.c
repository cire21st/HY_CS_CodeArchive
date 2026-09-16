#include <stdio.h>

int atoi(char s[]){
    int i, n;
    n = 0;

    for(i = 0; s[i] >= '0' && s[i] <= '9'; i++){
        n = 10 * n +(s[i] - '0');
    }
    return n;
}

int main(void){
    char str[100];

    printf("Enter num string: ");
    fgets(str,sizeof(str),stdin);

    int len = 0;
    while(str[len] != '\0'){
        if (str[len] == '\n'){
            str[len] = '\0';
            break;
        }
        len++;
    }
    
    int result = atoi(str);
    printf("coverted int: %d\n", result);

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  

    if (isalpha(ch)) {   
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("It is a vowel.\n");
        else
            printf("It is a consonant.\n");
    } 
    else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
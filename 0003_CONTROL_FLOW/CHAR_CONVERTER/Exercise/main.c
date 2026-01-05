#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if(isdigit(character)){
        printf("\n The Character is numeric");
    }

    // is alpha
    if(isalpha(character)){
        printf("\n The Character is Alpha ");
    }

     // is alpha numeric
     if(isalnum(character)){
        printf("\n The Character is Alphanumeric ");
    }

    // is upper case
    if(isupper(character)){
        printf("\n The Character is uppercase");
    }

    // is lower case
    if(islower(character)){
        printf("\n The Character is lowercase");
    }

    // to upper case
    if(isalpha(character) && islower(character)){
        char charUP = toupper(character);
        printf("\n The Uppercase version of %c is %c", character, charUP);
    }

    // to lower case
      if(isalpha(character) && isupper(character)){
        char charUP = tolower(character);
        printf("\n The Lowercase version of %c is %c", character, charUP);
    }
}
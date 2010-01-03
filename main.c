#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Normal comment
/// Documentation comment

#define MAX_CHARS 300

char *asciiLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *numbers = "0123456789";
char *misc = "_-+*/\\:. ";
char input[300];
char test[] = "valid";

/**
Structures
*/

struct param
{
    char workingDirectory[MAX_CHARS];
    char filesToProcess[MAX_CHARS];
    char delimiter;
};


/// Declaration of functions
int input_is_valid(char *input, char *allowedChars);



int main(void)
{
    printf("Hello world!\n");
    if (input_is_valid(test, asciiLetters))
    {
        printf("Test OK");
    }
    else
    {
        printf("Test failed");
    }
    return 0;
}




int input_is_valid(char *input, char *allowedChars)
{
    unsigned short int charIsAllowed = 0;
    unsigned short int i = 0;

    while(*input)
    {
        charIsAllowed = 0;

        for (i = 0 ; *(allowedChars + i) != '\0' ; i++)
        {
            if (*input == *(allowedChars + i))
            {
                charIsAllowed = 1;
                break;
            }
        }

        if(charIsAllowed == 1)
        {
            input++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

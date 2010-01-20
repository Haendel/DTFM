#include "input_validator.h"

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

/*
Author : laurent PABION
Mail : lpabion <AT> gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "menu.h"
#include "input_validator.h"






char *asciiLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *numbers = "0123456789";
char *misc = "_-+*/\\:. ";
char input[300];
char test[] = "valid";



int main(int argc, char *argv[])
{

    show_menu_header("Delimited Text File Manager (D.T.F.M.) version 0.0.2", "");

    if (input_is_valid(test, asciiLetters))
    {
        printf("Test OK\n");
    }

    else
    {
        printf("Test failed\n");
    }

    getchar();
    return 0;
}
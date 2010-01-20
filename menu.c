#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"


void show_menu_header(char *appTitle, char *author)
{

size_t lenAppTitle = 0;
Menu myMenu;

strcpy(myMenu.appTitle, appTitle);
strcpy(myMenu.author, author);

lenAppTitle = strlen(myMenu.appTitle);

build_menu_border(&myMenu, lenAppTitle, '-');

printf("%s\n", myMenu.border);
printf("%s\n", myMenu.appTitle);

if (strlen(myMenu.author) > 0)
    {
    printf("%s\n", myMenu.author);
    }

printf("%s\n", myMenu.border);

}

void build_menu_border(Menu *myMenu, size_t lenAppTitle, const char borderStyle)
{
    size_t i = 0;
    
    for(i = 0; i < lenAppTitle; i++)
    {
        *(myMenu->border + i) = borderStyle;
    }
    *(myMenu->border + lenAppTitle) = '\0';
}


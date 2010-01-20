#ifndef DEF_MENU
#define DEF_MENU

#define CONSOLE_WIDTH 80  //number of characters per line
#define CONSOLE_SECURITY_MARGIN 10 //we need enough space to display information
#define FILENAME_MAX_LENGTH 20
#define MENU_STRINGS_MAX_LENGTH 60



typedef struct Menu
{
    char appTitle[MENU_STRINGS_MAX_LENGTH];
    char author[MENU_STRINGS_MAX_LENGTH];
    char border[MENU_STRINGS_MAX_LENGTH];
} Menu;



void show_menu_header(char *appTitle, char *author);
void build_menu_border(Menu *myMenu, size_t lenAppTitle, const char borderStyle);


#endif


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "file_management.h"

FILE* open_file(const char* filename, const char* mode)
{
    FILE *myFile = NULL;

    myFile = fopen(filename, mode);
    return myFile;
}
#include "file-exists.h"
#include <stdio.h>

int file_exists(const char *filename)
{
    FILE *file = fopen(filename, "r");

    /* try to open file to read */
    if (file != NULL)
    {
        fclose(file);
        return 1;
    }
    return 0;
}
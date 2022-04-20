#include <stdio.h>
#include "services.h"

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

void file_creator(const char *filename)
{
    FILE *write_file;
    write_file = fopen(filename, "w");
    fclose(write_file);
}

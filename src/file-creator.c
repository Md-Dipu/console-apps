#include "file-creator.h"
#include <stdio.h>

void file_creator(const char *filename)
{
    FILE *write_file;
    write_file = fopen(filename, "w");
    fclose(write_file);
}
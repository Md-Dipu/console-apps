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

void get_help(void)
{
    printf("Creates one or more files.\n\n"
           "touch [-help | /h] <filename | filenames>\n\n"
           "  filename \tName of file to create.\n"
           "  -help, /h \tDisplay user guide documentation.\n\n"
           "To create more than one file attach filenames using \n"
           "<file1> <file2> <file3> ... <fileN> format.\n");
}

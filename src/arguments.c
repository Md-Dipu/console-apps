#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "arguments.h"

int check_arg(const char *arg_str)
{
    char *str = (char *)malloc(strlen(arg_str) * sizeof(char));
    strcpy(str, arg_str);
    for (char *s = str; *s; s++)
        *s = toupper(*s);

    if (strcmp(str, "HELP") == 0 || strcmp(str, "H") == 0 || strcmp(str, "?") == 0)
        get_help();
    return 0;
}

void get_help(void)
{
    printf("Creates one or more files.\n\n"
           "TOUCH [-help | /H] <filename>\n\n"
           "  filename \tName of file/files to create.\n"
           "  /H \t\tGet user guide documentation.\n\n"
           "Use '/' or '-' sign to attach arguments.\n\n"
           "And to create more than one file attach filename in <file1> <file2> <file3> ... <fileN> format.\n");
}

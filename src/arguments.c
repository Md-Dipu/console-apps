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

    if (strcmp(str, "H") == 0 || strcmp(str, "?") == 0)
        get_help();
    return 0;
}

void get_help(void)
{
    puts("This is help documentation.");
}

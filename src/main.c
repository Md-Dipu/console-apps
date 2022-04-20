#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "services.h"
#include "arguments.h"

int main(const int argc, const char *argv[])
{
    // arguments
    for (int i = 1; i < argc; i++)
    {
        if (*(*(argv + i)) == '/' || *(*(argv + i)) == '-')
        {
            char *arg_str = (char *)malloc(strlen(*(argv + i)) * sizeof(char));
            strcpy(arg_str, *(argv + i));
            arg_str++;
            check_arg(arg_str);
        }
    }

    // actions
    for (int i = 1; i < argc; i++)
    {
        if (*(*(argv + i)) == '/' || *(*(argv + i)) == '-')
            break;

        const char *filename = *(argv + i);
        if (!file_exists(filename))
            file_creator(filename);
        else
            printf("\"%s\" file already exists.\n", filename);
    }
    return 0;
}
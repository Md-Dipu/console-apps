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
        if (argv[i][0] == '/' || argv[i][0] == '-')
        {
        }
    }

    // actions
    for (int i = 1; i < argc; i++)
    {
        const char *filename = argv[i];
        if (!file_exists(filename))
            file_creator(filename);
        else
            printf("\"%s\" file already exists.\n", filename);
    }
    return 0;
}
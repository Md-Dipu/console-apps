#include <stdio.h>

#include "file-creator.h"
#include "file-exists.h"

int main(const int argc, const char *argv[])
{
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
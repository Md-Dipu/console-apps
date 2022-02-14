#include <stdio.h>
#include "./src/file_creator.c"
#include "./src/file_exists.c"

void main(const int argc, const char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        const char *filename = argv[i];
        if (!file_exists(filename))
            file_creator(filename);
        else
            printf("\"%s\" file already exists.", filename);
    }
}
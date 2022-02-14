#include <stdio.h>
#include "./src/file_creator.c"

void main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        file_creator(argv[i]);
    }
}
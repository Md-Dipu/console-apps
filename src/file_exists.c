#include <stdbool.h>

bool file_exists(const char *filename)
{
    FILE *file;
    /* try to open file to read */
    if (file = fopen(filename, "r"))
    {
        fclose(file);
        return true;
    }
    return false;
}
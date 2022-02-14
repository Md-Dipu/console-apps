void file_creator(char *filename)
{
    FILE *write_file;
    write_file = fopen(filename, "w");
    fclose(write_file);
}
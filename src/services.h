#ifndef __SERVICES__
#define __SERVICES__

/**
 * File exists check is file already written or not.
 */
int file_exists(const char *filename);

/**
 * File creator just write a file.
 */
void file_creator(const char *filename);

/**
 * This function show documentation.
 * Use command-line argument -H or, /H to view help documentation.
 */
void get_help(void);

#endif
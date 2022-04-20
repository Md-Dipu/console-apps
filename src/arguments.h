#ifndef __C_L_ARGUMENT_
#define __C_L_ARGUMENT_

/**
 * Match the argument and turn on the action
 * It returns 1 if matched or 0
 */
int check_arg(const char *arg_str);

/**
 * This function show documentation.
 * Use command-line argument -H or, /H to view help documentation.
 */
void get_help(void);

#endif
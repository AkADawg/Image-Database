/*
 * Created by Sotirios-Efstathios Maneas on 2017-01-02.
 */

#include <stdio.h>
#include <string.h>

#include "utils.h"

/*
 * Tokenize the string stored in cmd based on DELIMITERS as separators.
 * Return the number of tokens, and store pointers to them in cmd_argv.
 */
int tokenize(char *cmd, char **cmd_argv)
{
        char *tkn;
        int numTkn = 0;

        tkn = strtok(cmd, DELIMITERS);

        while (tkn != NULL)
        {
                cmd_argv[numTkn] = tkn;
                tkn = strtok(NULL, DELIMITERS);
                numTkn++;
        }
        return numTkn;
}

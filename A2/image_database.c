/*
 * Created by Sotirios-Efstathios Maneas on 2017-01-02.
 */

#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "utils.h"

int main(void)
{

        // char array to hold a line of input
        char buf[BUFFER_SIZE] = {'\0'};

        // char* array to hold the pointers to tokens
        char *args[INPUT_ARG_MAX_NUM];

        // the root of the tree
        struct TreeNode root;
        root.value = "";
        root.child = NULL;
        root.sibling = NULL;

        struct TreeNode *root_ptr = &root;

        // Add your code below:
        int numTkn = 0;

        while (fgets(buf, BUFFER_SIZE, args) != NULL)
        {

                numTkn = tokenize(buf, args);

                if (args[][0] == 'i' && numTkn == 5)
                {
                        //do command 1
                }
                else if (args[0][0] = 'q' && numTkn == 4)
                {
                        //do command 2
                }
                else if (args[0][0] == 'p' && numTkn == 1)
                {
                        //do command 3
                }
                else
                {
                        fprint(stderr, "Invalid command.");
                }
        }

        return 0;
}

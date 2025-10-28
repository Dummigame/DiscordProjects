#include <stdio.h>

#define LENGTH 8

int main()
{
    int swap;
    int input[LENGTH] = {2000, 178435, 23, 8, 129, 1243507, -1358,12890478};
    for(int i=0; i<LENGTH; i++)
    {
        for(int i__=1; i__<=LENGTH; i__++)
        {
            if(input[i__] > input[i__-1])
            {
                swap = input[i__-1];
                input[i__-1] = input[i__];
                input[i__] = swap;
            }
        }
    }
    for(int i_=0; i_<LENGTH; i_++)
    {
        printf("%d ",input[i_]);
    }
    printf("\n");
    return 0;
}
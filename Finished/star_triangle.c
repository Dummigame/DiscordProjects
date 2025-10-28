#include <stdio.h>

#define BOTTOM_CALC max/4+lines_printed/2+max_multiple_of_four+1

int main()
{
    char max=21; //Controls the size of the triangle.

    char printed_on_line=0;
    char lines_printed=0;
    char max_multiple_of_four =0;

    if(max%2)
    {
        max++;
    }
    if(max%4)
    {
        max_multiple_of_four++;
    }

    for(char i=0; i<=max; i++)
    {
        printed_on_line =0;
        if(!i)
        {
            for (; printed_on_line < max/2; printed_on_line++)
            {
                printf(" ");
            }
            if(printed_on_line == max/2)
            {
                printf("*\n");
                lines_printed++;
                continue;
            }
        }

        if(lines_printed < max/2)
        {
            for (; printed_on_line < max/2-lines_printed; printed_on_line++)
            {
                printf(" ");
            }
            printf("*");
            for (; printed_on_line < max/2+lines_printed-1; printed_on_line++)
            {
                printf(" ");
            }
            printf("*\n");
            lines_printed++;
            continue;
        }
        else
        {
            for (; printed_on_line < BOTTOM_CALC; printed_on_line++)
            {
                printf("* ");
            }
            printf("\nTriangle :3\n");
            return 0;
        }

    }  
}
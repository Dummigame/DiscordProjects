#define STARTOFALPHABET 65

#include <stdio.h>
int main()
{
    for(char i=STARTOFALPHABET; i<123;i++)
    {
        if(i > STARTOFALPHABET+25 && i < STARTOFALPHABET+32)
        {continue;}
        printf("%c\n", i);
    }
}
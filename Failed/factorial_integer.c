#include <stdint.h>
#include <stdio.h>

int main()
{
    int input=5;

    int64_t output=0;

    if(input>16) input=16;

    int i_=0;

    for(int i=input+1; i>0; i--)
    {
        i_=i-1;
        output+= i*i_;
    }

    printf("%ld\n", output);
}

//How did I fail this lmfao
#include <stdio.h>
#include <stdlib.h>

#define INLEN 20

int get_string_length(char input[]);
char* reverse_string(char input[], int string_length);

int main()
{
    char input[INLEN] = "A string.";
    int string_length = get_string_length(input);
    char* output = (char*)malloc(string_length*sizeof(char));
    output = reverse_string(input, string_length);
    printf("Input: %s\nOutput: %s\n", input, output);
    return 0;
}
///////////

int get_string_length(char input[])
{
    int i;
    for(i=1; input[i]; i++);
    return i;
}

///////////
char* reverse_string(char input[], int string_length)
{
    char* output = (char*)malloc(string_length*sizeof(char));

    for(int i=0; i<=string_length; i++)
    {
        output[-1+string_length-i] = input[i];
    }
    return output;
}
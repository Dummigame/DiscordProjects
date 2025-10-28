#include <stdio.h>
#include <stdlib.h>

#define LENGTH 8

char* bubble_sort(char input[]);
char* copy_string(char input[]);
int do_strings_match(char input_1[], char input_2[]);


////////////////////

int main()
{
    char input[LENGTH] = "listen";
    char input_2[LENGTH] = "silent";

    char* output = bubble_sort(input);
    char* output_2 = bubble_sort(input_2);

    int is_anagram = do_strings_match(output, output_2);

    if(is_anagram) printf("True");
    else printf("False");

    printf("\n");
    return 0;
}

////////////////////

char* bubble_sort(char input[])
{
    int string_length;
    for(string_length=0; input[string_length]; string_length++);
    char* output = (char*)malloc(string_length*sizeof(char));

    int swap;
    for(int i=0; i<string_length; i++)
    {
        for(int i__=1; i__<=string_length; i__++)
        {
            if(input[i__] > input[i__-1])
            {
                swap = input[i__-1];
                input[i__-1] = input[i__];
                input[i__] = swap;
            }
        }
    }
    output = copy_string(input);
    return output;
}

////////////////////

char* copy_string(char input[])
{
    int string_length;
    for(string_length=0; input[string_length]; string_length++);
    char* output = (char*)malloc(string_length*sizeof(char));

    for(int i=0; i<string_length; i++)
    {
        output[i]=input[i];
    }
    return output;
}

////////////////////

int do_strings_match(char input_1[], char input_2[])
{
    int matching=0;
    int i;
    for(i=0; input_1[i] && input_2[i]; i++)
    {
        if(input_1[i] == input_2[i]) matching++;
    }
    if(matching == i) matching=1;
    else matching=0;
    return matching;
}
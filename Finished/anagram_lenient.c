#include <stdio.h>
#include <stdlib.h>

#define LENGTH 8

char* bubble_sort(char input[]);
char* copy_string(char input[]);
char* make_string_lower_case(char input[]);
int get_string_length(char input[]);
int do_strings_match(char input_1[], char input_2[]);


////////////////////

int main()
{
    char input[LENGTH] = "Listen";
    char input_2[LENGTH] = "Silent";

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
    int string_length = get_string_length(input);
    char* output = (char*)malloc(string_length*sizeof(char));

    char* formatted_input = make_string_lower_case(input);

    int swap;
    for(int i=0; i<string_length; i++)
    {
        for(int i__=1; i__<=string_length; i__++)
        {
            if(formatted_input[i__] > formatted_input[i__-1])
            {
                swap = formatted_input[i__-1];
                formatted_input[i__-1] = formatted_input[i__];
                formatted_input[i__] = swap;
            }
        }
    }
    output = copy_string(formatted_input);
    return output;
}

////////////////////

char* copy_string(char input[])
{
    int string_length = get_string_length(input);
    char* output = (char*)malloc(string_length*sizeof(char));

    for(int i=0; i<string_length; i++)
    {
        output[i]=input[i];
    }
    return output;
}

////////////////////

char* make_string_lower_case(char input[])
{
    int string_length = get_string_length(input);
    char* output = (char*)malloc(string_length*sizeof(char));

    for(int i=0; i<string_length; i++)
    {
        if(input[i] >= 65 && input[i] <= 90) //Start and end of uppercase alphabet
        {
            input[i] = input[i]+32; //Offset between uppercase and lowercase characters
        }
    }

    for(int i_=0; i_<string_length; i_++)
    {
        output[i_]=input[i_];
    }

    return output;
}

////////////////////

int get_string_length(char input[])
{
    int string_length;
    for(string_length=0; input[string_length]; string_length++);
    return string_length;
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
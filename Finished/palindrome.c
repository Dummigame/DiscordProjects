#include <stdio.h>
#include <stdlib.h>

char* convert_to_string(int input);
char* reverse_string(char input[]);
char is_palindrome(char input[], char reversed_input[]);

int main()
{
    int input_true=92529;
    char* input_string=convert_to_string(input_true);
    char* reversed_string=reverse_string(input_string);

    char palindrome=is_palindrome(input_string, reversed_string);

    if(palindrome) printf("\nTrue\n");
    else printf("\nFalse\n");

    

    return 0;
}

////////////////////

char* convert_to_string(int input)
{   
    char* input_string = (char*)malloc(20*sizeof(char));
    sprintf(input_string, "%d", input);
    return input_string;
}

////////////////////

char* reverse_string(char input[])
{
    int string_length;
    for(string_length=0; input[string_length]; string_length++);


    char* output = (char*)malloc(string_length*sizeof(char));

    for(int i=0; i<=string_length; i++)
    {
        output[-1+string_length-i] = input[i];
    }
    return output;

}

/////////////////////

char is_palindrome(char input[], char reversed_input[])
{
    char is_palindrome=0;
    int input_length=0;
    for(input_length=0; input[input_length]; input_length++);

    for(int i=0; i<=input_length; i++)
    {
        if(i == input_length-1)
        {
            is_palindrome=1;
        }
        if(reversed_input[i] == input[i]) continue;
        break;
    }
    return is_palindrome;
}
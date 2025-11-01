#include <stdio.h>

int main()
{
    int input;
    printf("Enter a positive integer:");
    scanf("%d", &input);
    int output=1;
    if(input>50) input=50;

    for(int i=1; i<input; i++)
    {
        output += output*i;
    }

    printf("\n%d\n", output);
    return 0;
}
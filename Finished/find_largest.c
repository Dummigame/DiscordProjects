#include <stdio.h>

#define LOWER_INT32_LIMIT -2147483648
#define LENGTH 20

int main()
{
    int input[LENGTH] = {1,2,3,4,5,6,7,8,9,21,11,12,13,14,15,16,17,18,19,20};
    int largest=LOWER_INT32_LIMIT;
    for(int i=0; i<LENGTH; i++)
    {
        if(input[i] > largest) largest=input[i];
    }
    printf("%d\n", largest);
    return 0;
}
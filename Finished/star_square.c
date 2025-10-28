#include <stdio.h>

void print_starline(int size);
void print_sides(int size);

int main()
{
    printf("\n");
    int size = 20;
    print_starline(size);
    print_sides(size);
    print_starline(size);
    printf("\n");
    return 0;
}

void print_starline(int size)
{
    for(int i=0; i<size; i++)
    {
        printf("*");
    }
    return;
}

void print_sides(int size)
{
    for(int i=0; i<size/2; i++)
    {
        printf("\n*");
        for(int i_=0; i_<size-2; i_++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
}
#include <stdio.h>

// copy input to output; 2nd version
int main(int argc, char const *argv[])
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    
    return 0;
}

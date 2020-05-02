#include <stdio.h>

// copy input to output; 2nd version
int main(int argc, char const *argv[])
{
    int c;

    while (c = getchar() != EOF)
    {
        printf("c will be either 0 or 1 depending on whether getchar() is equal/not equal to EOF\n");
        printf("c is %d\n",c);
        putchar(c);
    }
    printf("EOF given, c is %d\n",c);
    return 0;
}

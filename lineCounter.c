#include <stdio.h>

/* count lines in input */

int main(int argc, char const *argv[])
{
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
    }
    printf("There were %d lines.\n", nl);
    
    return 0;
}

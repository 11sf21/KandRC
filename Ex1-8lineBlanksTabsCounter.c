#include <stdio.h>

/* count lines in input */

int main(int argc, char const *argv[])
{
    int c, nl, nt, ns;

    nl = 0;
    nt = 0;
    ns = 0;
    
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
        if(c == '\t') {
            ++nt;
        }
        if(c == ' ') {
            ++ns;
        }
    }
    printf("There were %d lines.\n", nl);
    printf("There were %d tabs.\n", nt);
    printf("There were %d spaces.\n", ns);

    return 0;
}

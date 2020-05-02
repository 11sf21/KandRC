#include <stdio.h>

/* count lines in input */

int main(int argc, char const *argv[])
{
    int c, d;
    
    while((c = getchar()) != EOF) {
        d = 0;
        if(c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;
        }
        else if(c == '\b') { // /b doesn't seem to work, oh well
            putchar('\\');
            putchar('b');
            d = 1;
        }
        else if(c == '\\') {
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if(d == 0) {
            putchar(c);
        }
    }

    return 0;
}

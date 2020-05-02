#include <stdio.h>

/* count lines in input */

int main(int argc, char const *argv[])
{
    int c;
    
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            while((c = getchar()) == ' ') {
                ;
            }
            putchar(' ');
            putchar(c);
        }
        else {
            putchar(c);
        }
    }

    return 0;
}

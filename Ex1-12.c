#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
int main()
{
    int c, state;

    state = IN;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN) // if in word then a space comes print a new line
            {
                state = OUT;
                putchar('\n');
            }
            /* else already have new line, don't print anything */
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }

    return 0;
}
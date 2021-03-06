#include <stdio.h>

#define LOWER   0       // lower limit of table
#define UPPER   300     // upper limit
#define STEP    20      // step size

/* Print Fahrenheit-Celcius table */
int main(int argc, char const *argv[])
{
    int fahr;

    printf("Fahrenheit\tCelcius\n");
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}

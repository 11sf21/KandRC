#include <stdio.h>

#define LOWER   0       // lower limit of table
#define UPPER   300     // upper limit
#define STEP    20      // step size

/* Print Celsius-Fahrenheit table */
int main(int argc, char const *argv[])
{
    int celsius;

    printf("Celsius\tFahrenheit\n");
    for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
        printf("%3d\t\t%6.1f\n", celsius, (9.0/5.0)*celsius+32);
    }
    return 0;
}

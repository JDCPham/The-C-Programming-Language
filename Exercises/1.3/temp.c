#include <stdio.h>

/* Print Farenheight vs. Celcius Table */
main() {
    int fahr;
    int celcius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3d%6d\n", fahr, celcius);
        fahr = fahr + step;
    }
}
#include <stdio.h>
/*
 * Print Fahrenheit-Celsius table using FOR LOOP.
 * */

int main(int argc, const char *argv[])
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.2f\n",fahr,(5.0/9.0)*(fahr -32));
    }
    return 0;
}

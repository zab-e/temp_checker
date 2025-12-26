#include <stdio.h>

double convert_to_fahrenheit(double x) {
    return (x * 1.8) + 32;
}

double convert_to_celsius(double x) {
    return (x - 32) / 1.8;
}

void run_code() {
    double temp, result;
    char unit;

    printf("Choose unit (F,C):\n");
    scanf(" %c", &unit);

    if (unit == 'F' || unit == 'f') {
        printf("Enter temperature in Fahrenheit:\n");
        scanf("%lf", &temp);

        result = convert_to_celsius(temp);
        printf("Result: %.2lfC\n", result);

    } else if (unit == 'C' || unit == 'c') {
        printf("Enter temperature in Celsius:\n");
        scanf("%lf", &temp);

        result = convert_to_fahrenheit(temp);
        printf("Result: %.2lfF\n", result);

    } else {
        printf("Invalid unit!\n");
    }
}

int main() {
    run_code();
    return 0;
}

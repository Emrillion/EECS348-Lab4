#include <stdio.h>
// A program to convert temperatures between various scales

float celsius_to_fahrenheit(float celsius) {
    return (9.0 / 5.0)*celsius + 32.0;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (5.0 / 9.0)*(fahrenheit - 32.0);
}

float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return (5.0 / 9.0)*(fahrenheit - 32.0) + 273.15;
}

float kelvin_to_fahrenheit(float kelvin) {
    return (9.0 / 5.0)*(kelvin - 273.15) + 32.0;
}

int TempConversionMain() {
    float temp;
    printf("Enter a temperature value:");
    scanf("%f", &temp);


    return 0;
}
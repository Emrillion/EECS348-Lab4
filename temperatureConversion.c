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
    char scale;
    char target_scale;
    
    // Get user input
    printf("Enter a temperature value:");
    scanf("%f", &temp);
    printf("Choose the temperature scale of the input value (F, C, K): ");
    scanf(" %c", &scale);
    printf("Choose the target temperature scale (F, C, K): ");
    scanf(" %c", &target_scale);

    // Perform conversion based on user input
    float result;
    if (scale == 'C' && target_scale == 'F') {
        result = celsius_to_fahrenheit(temp);
    } else if (scale == 'F' && target_scale == 'C') {
        result = fahrenheit_to_celsius(temp);
    } else if (scale == 'C' && target_scale == 'K') {
        result = celsius_to_kelvin(temp);
    } else if (scale == 'K' && target_scale == 'C') {
        result = kelvin_to_celsius(temp);
    } else if (scale == 'F' && target_scale == 'K') {
        result = fahrenheit_to_kelvin(temp);
    } else if (scale == 'K' && target_scale == 'F') {
        result = kelvin_to_fahrenheit(temp);
    } else {
        printf("Invalid scale input.\n");
    }
    printf("Converted temperature: %.2f %c\n", result, target_scale);

    return 0;
}
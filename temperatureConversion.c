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
    // Print the result
    printf("Converted temperature: %.2f %c\n", result, target_scale);

    //Categorize temperature
    // First convert the input temperature to Celsius
    float temp_in_celsius;
    if (scale == 'C') {
        temp_in_celsius = temp;
    } else if (scale == 'F') {
        temp_in_celsius = fahrenheit_to_celsius(temp);
    } else if (scale == 'K') {
        temp_in_celsius = kelvin_to_celsius(temp);
    }
    // Now categorize 
    if (temp_in_celsius < 0) {
        printf("Freezing. Stay inside.\n");
    } else if (temp_in_celsius >= 0 && temp_in_celsius < 10) {
        printf("Cold. Wear a jacket.\n");
    } else if (temp_in_celsius >= 10 && temp_in_celsius < 25) {
        printf("Comfortable. No action needed.\n");
    } else if (temp_in_celsius >= 25 && temp_in_celsius < 35) {
        printf("Hot. Stay hydrated.\n");
    } else {
        printf("Extreme Heat. Stay inside.\n");
    }


    return 0;
}
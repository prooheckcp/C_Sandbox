#include <stdio.h>

float fahrToCelsius(float fahr){
    return (5.0f/9.0f) * (fahr - 32.0f);
}

float celsiusToFahr(float celsius){
    return (9.0f/5.0f) * (celsius) + 32.0f;
}

void printFahrToCelsiusTable(float lower, float upper, float step){
    float celsius = 0, fahr = lower;

    printf("Fahr\tCelsius\n");
    while (fahr <= upper){
        celsius = fahrToCelsius(fahr);
        printf("%6.2f\t%8.2f\n", fahr, celsius);
        fahr += step; 
    }
}

void printCelsiusToFahrTable(float lower, float upper, float step){
    float fahr = 0, celsius = 0;

    printf("Celsius\tFahr\n");
    while (celsius <= upper){
        fahr = celsiusToFahr(celsius);
        printf("%6.2f\t%8.2f\n", celsius, fahr);
        celsius += step;
    }
}

/*
    Print the fahrenheit-celsius table
    for fahr = 0, 20, ..., 300
*/
int main(){
    int lower, upper, step;

    lower = 0; // Lower limit of the temperature table
    upper = 300; // Upper limit of the table
    step = 20; // Step size

    printFahrToCelsiusTable(lower, upper, step);
    printf("===========\n");
    printCelsiusToFahrTable(-17.78, 150, 10);

    return 0;
}
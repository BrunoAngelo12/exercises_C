/*
Program> Temperature Converter
Purpose> Convert temperatures from Celsius to Fahrenheit and vice versa.
Author> Bruno Angelo;
Date> February/2024;
Version> 1.0
*/
#include <stdio.h>

void convertCelsiusToFahrenheit(){
    float fltCelsius, fltFahrenheit;
    printf("Enter the value in Celsius to be converted to Fahrenheit: ");
    scanf("%f", &fltCelsius);
    fltFahrenheit = (9 * fltCelsius + 160) / 5;
    printf("The value in Celsius that was inputted converted to Fahrenheit is %.2f", fltFahrenheit);
}

void convertFahrenheitToCelsius(){
    float fltCelsius, fltFahrenheit;
    printf("Enter the value in Fahrenheit to be converted to Celsius: ");
    scanf("%f", &fltFahrenheit);
    fltCelsius = ((fltFahrenheit - 32) * 5) / 9;
    printf("The value in Fahrenheit that was inputted converted to Celsius is %.2f", fltCelsius);
}

int main(int argc, char const *argv[])
{
    char charSelection;
    printf("Enter C for Celsius or F for Fahrenheit: ");
    scanf("%c", &charSelection);
    charSelection == 'C' ? convertCelsiusToFahrenheit() : convertFahrenheitToCelsius();
    return 0;
}

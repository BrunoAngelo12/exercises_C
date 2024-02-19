/*
Program> ExerciseOilCan
Purpose> Calculate and present the volume of an oil can.
Author> Bruno Angelo;
Date> February/2024;
Version> 1.0
*/
#include <math.h>
#define PI 3.14159


float calculateOilCanVolume(float fltRadius, float fltHeight){
    float fltVolume = PI * (pow(fltRadius, 2)) * fltHeight;
    return fltVolume;
}

int main(int argc, char const *argv[])
{
    float fltRadius, fltHeight, fltVolume;
    printf("Welcome, let's calculate the volume of your oil can. Please enter the radius of the can: ");
    scanf("%f", &fltRadius);
    printf("\nNow, the height of the can: ");
    scanf("%f", &fltHeight);
    fltVolume = calculateOilCanVolume(fltRadius, fltHeight);
    printf("Oil can volume is %.2f", fltVolume);
    return 0;
}

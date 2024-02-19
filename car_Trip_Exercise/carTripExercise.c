/*
Program> Car Trip Exercise
Purpose> The program calculates the amount of fuel used on a car trip based on the time spent and the average speed provided by the user.
Author> Bruno Angelo;
Date> February/2024;
Version> 1.0
*/
float calculateDistance(float fltTimeTravel, int intSpeed){
    float intDistance = (float)(fltTimeTravel * intSpeed);
    return intDistance;
}

float calculateLitersUsedOnTheTrip(int intDistance){
    float usedLiters = intDistance / 12;
    return usedLiters;
}

int main(int argc, char const *argv[])
{
    printf("Welcome to the travel mode of your Honda Civic");
    float fltTimeTravel;
    printf("\nPlease provide the travel time: ");
    scanf("%f", fltTimeTravel);
    int intSpeed;
    printf("Please provide the average speed: ");
    scanf("%d", &intSpeed);
    float intDistance = calculateDistance(fltTimeTravel, intSpeed);
    float usedLiters = calculateLitersUsedOnTheTrip();

    return 0;
}

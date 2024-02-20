/*
Program> Car Trip Exercise
Purpose> The program calculates the amount of fuel used on a car trip based on the time spent and the average speed provided by the user.
Author> Bruno Angelo;
Date> February/2024;
Version> 1.0
*/
float calculateDistance(float fltTimeTravel, int intSpeed){
    float fltDistance = (float)(fltTimeTravel * intSpeed);
    return fltDistance;
}

float calculateLitersUsedOnTheTrip(float fltDistance){
    float usedLiters = (float) (fltDistance / 12);
    return usedLiters;
}

int main(int argc, char const *argv[])
{
    printf("Welcome to the travel mode of your Honda Civic");
    float fltTimeTravel;
    printf("\nPlease provide the travel time: ");
    scanf("%f", &fltTimeTravel);
    int intSpeed;
    printf("Please provide the average speed: ");
    scanf("%d", &intSpeed);
    float fltDistance = calculateDistance(fltTimeTravel, intSpeed);
    float usedLiters = calculateLitersUsedOnTheTrip(fltDistance);
    printf("Average speed: %d\nTravel time: %.2f\nDistance traveled: %.2f\nAmount of fuel used on the trip: %.2f", intSpeed, fltTimeTravel, fltDistance, usedLiters);
    return 0;
}

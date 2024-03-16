#include <stdio.h>

float floatLast3Temperatures[3][4];

void requestTemperatures(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Enter temperature %d of month %d: ", j+1, i +1);
            scanf("%f", &floatLast3Temperatures[i][j]);
        }
    }
}


int main(int argc, char const *argv[])
{
    requestTemperatures();
    system("clear");
    printf("*----Last 3 Temperatures-----*\n");

    for(int i = 0; i < 3; i++){
        printf("-----------------------\n");
        printf("Month %d\n", i +1);
        for(int j = 0; j < 3; j++){
            printf("Temperature %d: %.2f\n", j +1, floatLast3Temperatures[i][j]);
        }
    }
    return 0;
}

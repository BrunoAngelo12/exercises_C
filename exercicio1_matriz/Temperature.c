int main(int argc, char const *argv[])
{
    float floatLast3Temperatures[3][4] = {{25.4, 27.09, 28.90, 29.5},
    {21.08, 20.05, 22.90, 20.09}, {18.8, 20.10, 17.7, 19.0}};

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

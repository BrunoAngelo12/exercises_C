#include <stdio.h>

int main(int argc, char const *argv[])
{
    float grades[3];
    float sum = 0.0;

    for(int i = 0; i < 3; i++){
        printf("Enter the note for position %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
    
    for(int i = 0; i < 3; i++){
        sum += grades[i];
    }
    printf("The average grade is %.2f", sum / 3.0);
    return 0;
}

/*
Program> Positive or negative number
Purpose> Perform the reading of a positive or negative integer value represented by the 
variable N and present the read value as positive. Hint: if the read value is less than zero, 
it should be multiplied by -1.
Author> Bruno Angelo;
Date> March/2024;
Version> 1.0
*/

int main(int argc, char const *argv[])
{
    int intN;
    printf("Enter a number: ");
    scanf("%d", &intN);
    if(intN > 0){
        printf("Absolute value: %d", intN);
    }else{
        intN *= -1;
        printf("Absolute value: %d", intN);
    }
    return 0;
}

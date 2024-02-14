/*
Program> Arithmetic Mean Calculation for Students
Purpose> Calculate the arithmetic mean of a respective student using the 4 quarterly grades.
Author> Bruno Angelo;
Date> February/2024;
Version> 1.0
*/

float getGrade(){
    float fltGrade;
    printf("Enter the grade: ");
    scanf("%f", &fltGrade);
    return fltGrade;
}

int main(int argc, char const *argv[])
{
    float fltN1 = getGrade();
    float fltN2 = getGrade();
    float fltN3 = getGrade();
    float fltN4 = getGrade();
    float fltArithmeticMean = (fltN1 + fltN2 + fltN3 + fltN4) / 4.0;

    fltArithmeticMean >= 7 ? printf("Passed") : printf("Failed");

    return 0;
}

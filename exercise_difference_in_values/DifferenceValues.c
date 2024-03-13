calculateDifference(int a, int b){
    a > b ? printf("A > B, Difference = %d", a - b) : printf("B > A, Difference = %d", b -a);
}

int main(int argc, char const *argv[])
{
/*
Program> Difference Values
Purpose> Read two integer numerical values represented by the variables A and B, and present 
the result of the difference between the largest value and the smallest value.
Author> Bruno Angelo;
Date> March/2024;
Version> 1.0
*/
    int intA, intB;
    printf("Enter the value of A: ");
    scanf("%d", &intA);
    printf("Enter the value of B: ");
    scanf("%d", &intB);
    calculateDifference(intA,intB);
    return 0;
}

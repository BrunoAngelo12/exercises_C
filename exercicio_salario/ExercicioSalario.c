/*
Program> Exercise Salary
Purpose> Create an algorithm that reads the salary and the job code of an employee, and 
calculates the new salary. If the employee's job is not in the table, then they should 
receive a 52% increase. Show the old salary and the new salary.
Author> Bruno Angelo;
Date> March/2024;
Version> 1.0
*/

#include <stdio.h>

void showTable(){
    printf("*---------------------------------------*\n");
    printf("*  Code  | Office         | Percentage  *\n");
    printf("*  101   | Manager        | 12%%         *\n");
    printf("*  102   | Engineer       | 26%%         *\n");
    printf("*  103   | Technician     | 32%%         *\n");
    printf("*  104   | Administrative | 37%%         *\n");
    printf("*  105   | Assistant      | 41%%         *\n");
    printf("*---------------------------------------*\n");
}

void calculateNewSalary(float floatSalary, int intJobCode){
    float floatNewSalary;
    switch (intJobCode){
        case 101:
            floatNewSalary = (float)floatSalary + (0.12 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
        case 102:
            floatNewSalary = (float)floatSalary + (0.26 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
        case 103:
            floatNewSalary = (float)floatSalary + (0.32 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
        case 104:
            floatNewSalary = (float)floatSalary + (0.37 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
        case 105:
            floatNewSalary = (float)floatSalary + (0.41 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
        default:
            floatNewSalary = (float)floatSalary + (0.52 * (float)floatSalary);
            printf("Your old salary: R$ %.2f\n", floatSalary);
            printf("Your new salary is: R$ %.2f\n", (float)floatNewSalary);
            break;
    }
}

int main(int argc, char const *argv[])
{
    int intJobCode = 0;
    float floatSalary = 0.0;
    char charContinue = 'y';
    printf("Congratulations on the salary increase.\n\n");
    do{
        system("cls");
        printf("Enter the amount of your salary: ");
        scanf("%f", &floatSalary);
        showTable();
        printf("Select your job code: ");
        scanf("%d", &intJobCode);
        calculateNewSalary(floatSalary, intJobCode);
        getchar();
        printf("Do you want to calculate a new salary? (yes = y | no = n): ");
        charContinue = getchar();
    }while(charContinue == 'y');
    return 0;
}

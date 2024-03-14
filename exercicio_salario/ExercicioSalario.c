/*
Program> Exercise Salary
Purpose> Create an algorithm that reads the salary and the job code of an employee, and 
calculates the new salary. If the employee's job is not in the table, then they should 
receive a 52% increase. Show the old salary and the new salary.
Author> Bruno Angelo;
Date> March/2024;
Version> 1.0
*/
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

double calculateNewSalary(double doubleSalary, int intJobCode){
    double doubleNewSalary=0.0;
    switch (intJobCode){
        case 101:
        doubleNewSalary = 12.0 / 100.0 * doubleSalary;
        break;
    }
    return doubleNewSalary;
}

int main(int argc, char const *argv[])
{
    int intJobCode;
    double doubleSalary, doubleNewSalary;
    char charContinue = 'y';
    printf("Congratulations on the salary increase.\n\n");
    do{
        printf("Enter the amount of your salary: ");
        scanf("%lf", &doubleSalary);
        showTable();
        printf("Select your job code: ");
        scanf("%d", &intJobCode);
        doubleNewSalary = calculateNewSalary(doubleSalary, intJobCode);
        printf("Your new salary is: %.2f\n", doubleNewSalary);
        printf("Do you want to calculate a new salary? (yes = y | no = n): ");
        getchar();
        charContinue = getchar();
    }while(charContinue == 'y');
    return 0;
}

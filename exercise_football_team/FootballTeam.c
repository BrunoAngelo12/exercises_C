/*
Program> Football Team
Purpose> Build an algorithm that reads the code of a soccer team, if it's Flamengo, 
Fluminense, Vasco, or Botafogo, write "It's a team from Rio de Janeiro"; if it's Corinthians, 
São Paulo, Palmeiras, or Santos, write "It's a club from São Paulo"; otherwise, 
write "It's a team from another state".
Author> Bruno Angelo;
Date> March/2024;
Version> 1.0
*/
void showTable(){
    printf("*----------------------------------*\n");
    printf("*  Code    | Team        | State   *\n");
    printf("*  1       | Flamengo    | RJ      *\n");
    printf("*  2       | Fluminense  | RJ      *\n");
    printf("*  3       | Vasco       | RJ      *\n");
    printf("*  4       | Botafogo    | RJ      *\n");
    printf("*  5       | Corinthians | SP      *\n");
    printf("*  6       | Sao Paulo   | SP      *\n");
    printf("*  7       | Palmeiras   | SP      *\n");
    printf("*  8       | Santos      | SP      *\n");
    printf("*----------------------------------*\n");
}

void checkTeam(int intChosenCode){
    switch (intChosenCode){
        case 1:
        case 2:
        case 3:
        case 4:
        printf("It's a Rio team.\n");
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        printf("It's a team from Sao Paulo.\n");
        break;
        default:
        printf("It's a team from another state.\n");
        break;
    }
}

int main(int argc, char const *argv[])
{
    char charContinue = 'n';
    int intChosenCode;
    do{
    system("cls");
    showTable();
    printf("Choose the code of a team: ");
    scanf("%d", &intChosenCode);
    checkTeam(intChosenCode);
    getchar();
    printf("Do you wish to continue ? (Yes = y | No = n): ");
    charContinue = getchar();
    //getchar();    
    }while(charContinue == 'y');
    return 0;
}

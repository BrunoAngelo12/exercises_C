//Exercise aimed at simulating a multiplication table for a number entered by the user
int main(int argc, char const *argv[])
{
    int intNumberInserted;
    printf("Insert a number from 1 to 10: ");
    scanf("%d", &intNumberInserted);
    printf("\n");

    if(intNumberInserted >= 1 && intNumberInserted <= 10){
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", intNumberInserted, i, intNumberInserted * i);
        }
    }else{
        printf("Invalid number");
    }
    return 0;
}

//Exercise to calculate the area of ​​the circle
//a = pi x (r x r)
int main(int argc, char const *argv[])
{
    double doublePi = 3.14;
    double doubleR;
    double doubleArea;
    printf("Enter the circle radius: ");
    scanf("%lf", &doubleR);
    doubleArea = doublePi* (doubleR * doubleR);
    printf("The circle area = %.2f", doubleArea);
    return 0;
}

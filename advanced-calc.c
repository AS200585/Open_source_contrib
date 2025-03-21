#include<stdio.h>

int main()
{
    double num1;
    double num2;
    double num;
    char op;

    printf("Enter number 1 = ");
    scanf("%lf", &num1);
    printf("Enter number 2 = ");
    scanf("%lf", &num2);
    printf("Enter operator : ");
    scanf("%c", &op);

    if(op == '+'){
        num = num1 + num2;
        printf("%lf", num);
    } else if(op == '-'){
        num = num1 -num2;
        printf("%lf", num);
    } else if(op == '*') {
        num = num1 * num2;
        printf("%lf", num);
    } else if(op == '/'){
        num = num1 / num2;
        printf("%lf", num);
    } else {
        printf("Invalid Operator");
    }
    return 0;
}
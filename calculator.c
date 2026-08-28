// simple calculator
int main()
{
    int num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (sum, diffrence, product, division): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case 'sum':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case 'difference':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case 'product':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case 'division':
        if (num2 != 0)
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
        break;
    default:
        printf("Error: Invalid operator.\n");
    }
    return 0;
}
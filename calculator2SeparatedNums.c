#include <stdio.h>

int main()
{
    double num1, num2, result;
    char opt;

    printf("Hello, this program will calculate the result of 2 numbers.\n");

    printf("Please enter a number : \n");
    scanf(" %lf", &num1);

    // label to get back to when the operator is invalid
    selectingOperator :
    printf("Now enter any of the following operators : \n 1. + \n 2. - \n 3. * \n 4. / \n");
    scanf(" %c", &opt);

    //label to get back to choosing num2 if divided by 0
    selectingNum2 :
    printf("And the final number : \n");
    scanf(" %lf", &num2);

    switch (opt){
        case '+' :
        case '1' :
            result = num1 + num2;
            break;
        case '-' :
        case '2' :
            result = num1 - num2;
            break;
        case '*' :
        case '3' :
            result = num1 * num2;
            break;
        case '/' :
        case '4' :
            if (num2 != 0){
                result = num1 / num2;
                break;
            } else {
                printf("Invalid input, can't divide by 0.\n");
                goto selectingNum2;
            }
        default :
            printf("Invalid operator, please enter any of the mentioned operators.\n");
            goto selectingOperator;
        }

    printf("Result is = %8.2lf\n", result);

    return 0;
}

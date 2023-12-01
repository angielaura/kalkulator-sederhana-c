#include <stdio.h>

int main()
{
    double num1, num2, num3, hasil;
    char opt1, opt2;

    printf("Mohon masukkan perhitungan aritmatika dasar(Contoh : 7 + 9 / 15) : ");
    scanf("%lf %c %lf %c %lf", &num1, &opt1, &num2, &opt2, &num3);

    switch (opt1) {
        case '+':
            switch (opt2) {
                case '+':
                    hasil = num1 + num2 + num3;
                    break;
                case '-':
                    hasil = num1 + num2 - num3;
                    break;
                case '*':
                    hasil = num1 + num2 * num3;
                    break;
                case '/':
                    if (num3 != 0){
                        hasil = num1 + num2 / num3;
                    } else {
                        printf("Invalid input, can't divide by 0");
                        return 1;
                    }
                    break;
                default:
                    goto invalid_input;
            }
            break;

        case '-':
            switch (opt2) {
                case '+':
                    hasil = num1 - num2 + num3;
                    break;
                case '-':
                    hasil = num1 - num2 - num3;
                    break;
                case '*':
                    hasil = num1 - num2 * num3;
                    break;
                case '/':
                    if(num3 != 0){
                        hasil = num1 + num2 / num3;
                    } else {
                        printf("Invalid input, can't divide by 0");
                        return 1;
                    }
                    break;
                default:
                    goto invalid_input;
            }
            break;

        case '*':
            switch (opt2) {
                case '+':
                    hasil = num1 * num2 + num3;
                    break;
                case '-':
                    hasil = num1 * num2 - num3;
                    break;
                case '*':
                    hasil = num1 * num2 * num3;
                    break;
                case '/':
                    if (num3 != 0){
                        hasil = num1 * num2 / num3;
                    } else {
                        printf("Invalid input, can't divide by 0");
                        return 1;
                    }
                    break;
                default:
                    goto invalid_input;
            }
            break;

        case '/':
            switch (opt2) {
                case '+':
                    if (num2 != 0){
                        hasil = num1 / num2 + num3;
                    } else {
                        printf("Invalid input. Can't divide by 0.");
                        return 1;
                    }
                    break;
                case '-':
                    if (num2 != 0){
                        hasil = num1 / num2 - num3;
                    } else {
                        printf("Invalid input. Can't divide by 0.");
                        return 1;
                    }
                    break;
                case '*':
                    if (num2 != 0){
                        hasil = num1 / num2 * num3;
                    } else {
                        printf("Invalid input. Can't divide by 0.");
                        return 1;
                    }
                    break;
                case '/':
                    if (num2 != 0 && num3 != 0){
                        hasil = num1 / num2 / num3;
                    } else {
                        printf("Invalid input. Can't divide by 0.");
                        return 1;
                    }
                    break;
                default:
                    goto invalid_input;
            }
            break;
        default:
            invalid_input:
            printf("Invalid input. Mohon masukkan sesuai contoh.\n");
            return 1;
    }

    printf("Hasilnya adalah : %8.2lf", hasil);


    return 0;
}

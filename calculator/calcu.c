#include<stdio.h>
int main() {
    char op;
    float num1, num2;
    printf("Masukkan operator (+, -, *,): ");
    scanf("%c", &op);
    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);
    switch (op) {
    case '+':
        printf("%f + %f = %f", num1, num2, num1+num2);
        break;
    case '-':
        printf("%f - %f = %f", num1, num2, num1-num2);
        break;
    case '*':
        printf("%f * %f = %f", num1, num2, num1*num2);
        break;
    case '/':
        printf("%f / %f = %f", num1, num2, num1/num2);
        break;
    default:
        printf("Error!!! Operator salah.");
    }
    return 0;
}